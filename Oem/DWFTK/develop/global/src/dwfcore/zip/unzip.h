//  Copyright (c) 2000-2006 by Autodesk, Inc.
//
//  By using this code, you are agreeing to the terms and conditions of
//  the License Agreement included in the documentation for this code.
//
//  AUTODESK MAKES NO WARRANTIES, EXPRESS OR IMPLIED, AS TO THE CORRECTNESS
//  OF THIS CODE OR ANY DERIVATIVE WORKS WHICH INCORPORATE IT. AUTODESK
//  PROVIDES THE CODE ON AN "AS-IS" BASIS AND EXPLICITLY DISCLAIMS ANY
//  LIABILITY, INCLUDING CONSEQUENTIAL AND INCIDENTAL DAMAGES FOR ERRORS,
//  OMISSIONS, AND OTHER PROBLEMS IN THE CODE.
//
//  Use, duplication, or disclosure by the U.S. Government is subject to
//  restrictions set forth in FAR 52.227-19 (Commercial Computer Software
//  Restricted Rights) and DFAR 252.227-7013(c)(1)(ii) (Rights in Technical
//  Data and Computer Software), as applicable.
//


/* unzip.h -- IO for uncompress .zip files using zlib
   Version 0.15 beta, Mar 19th, 1998,

   Copyright (C) 1998 Gilles Vollant

   This unzip package allow extract file from .ZIP file, compatible with PKZip 2.04g
     WinZip, InfoZip tools and compatible.
   Multi volume ZipFile (span) are not supported.
   Old compressions used by old PKZip 1.x are not supported

   Condition of use and distribution are the same than zlib :

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.


*/
/* for more info about .ZIP format, see
      ftp://ftp.cdrom.com/pub/infozip/doc/appnote-970311-iz.zip
   PkWare has also a specification at :
      ftp://ftp.pkware.com/probdesc.zip */

//Note: Encryption (password) support added by Jeffrey Klug, Autodesk, Inc. 6/14/2003


#ifndef _unz_H
#define _unz_H

#include "dwfcore/String.h"
#include "dwfcore/FileInputStream.h"
#include "dwfcore/StreamFileDescriptor.h"
using namespace DWFCore;


#ifdef __cplusplus
extern "C" {
#endif

#ifndef _ZLIB_H
#if     defined(DWFCORE_BUILD_ZLIB) || defined(DWFTK_USE_DWFCORE_ZLIB)
#include "dwfcore/zlib/zlib.h"
#else
#include <zlib.h>
#endif

#endif

#include <stdio.h>

#if defined(STRICTUNZIP) || defined(STRICTZIPUNZIP)
/* like the STRICT of WIN32, we define a pointer that cannot be converted
    from (void*) without cast */
typedef struct TagunzFile__ { int unused; } unzFile__;
typedef unzFile__ *unzFile;
#else
typedef voidp unzFile;
#endif

#define UNZ_OK                                  (0)
#define UNZ_END_OF_LIST_OF_FILE (-100)
#define UNZ_ERRNO               (Z_ERRNO)
#define UNZ_EOF                 (0)
#define UNZ_PARAMERROR                  (-102)
#define UNZ_BADZIPFILE                  (-103)
#define UNZ_INTERNALERROR               (-104)
#define UNZ_CRCERROR                    (-105)
#define UNZ_BADPASSWORD                 (-106)

/* tm_unz contain date/time info */
typedef struct tm_unz_s
{
    uInt tm_sec;            /* seconds after the minute - [0,59] */
    uInt tm_min;            /* minutes after the hour - [0,59] */
    uInt tm_hour;           /* hours since midnight - [0,23] */
    uInt tm_mday;           /* day of the month - [1,31] */
    uInt tm_mon;            /* months since January - [0,11] */
    uInt tm_year;           /* years - [1980..2044] */
} tm_unz;

/* unz_global_info structure contain global data about the ZIPfile
   These data comes from the end of central dir */
typedef struct unz_global_info_s
{
    uLong number_entry;         /* total number of entries in
                       the central dir on this disk */
    uLong size_comment;         /* size of the global comment of the zipfile */
} unz_global_info;


/* unz_file_info contain information about a file in the zipfile */
typedef struct unz_file_info_s
{
    uLong version;              // version made by
    uLong version_needed;       // version needed to extract
    uLong flag;                 // general purpose bit flag
    uLong compression_method;   // compression method
    uLong dosDate;              // last mod file date in Dos fmt
    uLong crc;                  // crc-32
    uLong compressed_size;      // compressed size
    uLong file_data_offset;     // offset into zip file to start of file data
    uLong file_header_offset;   // offset into zip file to start of local file header
    uLong uncompressed_size;    // uncompressed size
    uLong size_filename;        // filename length
    uLong size_file_extra;      // extra field length
    uLong size_file_comment;    // file comment length
    uLong disk_num_start;       // disk number start
    uLong internal_fa;          // internal file attributes
    uLong external_fa;          // external file attributes
    uLong key[3];               // binary keys used for passwording
    tm_unz tmu_date;            // last mod date in tmu format
} unz_file_info;

ZEXTERN DWFInputStream* ZEXPORT unzGetFilePointer(unzFile uf);

ZEXTERN int ZEXPORT unzStringFileNameCompare OF ((const char* fileName1,
                                                 const char* fileName2,
                                                 int iCaseSensitivity));
/*
   Compare two filename (fileName1,fileName2).
   If iCaseSenisivity = 1, comparision is case sensitivity (like strcmp)
   If iCaseSenisivity = 2, comparision is not case sensitivity (like strcmpi
                                or strcasecmp)
   If iCaseSenisivity = 0, case sensitivity is defaut of your operating system
    (like 1 on Unix, 2 on Windows)
*/

struct locatorEntry
{
    char* filename;
    unsigned long num_file;
    unsigned long pos_in_central_dir;
};

typedef struct _unzIndex
{
    uLong locatorCount;
    struct locatorEntry **locatorArray;

    _unzIndex() : locatorCount(0), locatorArray(0) {}

    ~_unzIndex()
    {
        uLong i;
        for (i=0; i<locatorCount; i++)
        {
            if (locatorArray[i]->filename)
                free(locatorArray[i]->filename);
            if (locatorArray[i])
                free(locatorArray[i]);
        }
        if (locatorArray)
            free(locatorArray);
    }
} unzIndex;
ZEXTERN unzFile ZEXPORT unzOpenFile OF((const DWFString& zPath, unzIndex* pIndex));
ZEXTERN unzFile ZEXPORT unzOpenStream OF((DWFInputStream& rStream, unzIndex* pIndex));
/*
  Open a Zip file. path contain the full pathname (by example,
     on a Windows NT computer "c:\\zlib\\zlib111.zip" or on an Unix computer
     "zlib/zlib111.zip".
     If the zipfile cannot be opened (file don't exist or in not valid), the
       return value is NULL.
     Else, the return value is a unzFile Handle, usable with other function
       of this unzip package.
*/

ZEXTERN int ZEXPORT unzClose OF((unzFile file));
/*
  Close a ZipFile opened with unzipOpen.
  If there is files inside the .Zip opened with unzOpenCurrentFile (see later),
    these files MUST be closed with unzipCloseCurrentFile before call unzipClose.
  return UNZ_OK if there is no problem. */

ZEXTERN int ZEXPORT unzGetGlobalInfo OF((unzFile file,
                    unz_global_info *pglobal_info));
/*
  Write info about the ZipFile in the *pglobal_info structure.
  No preparation of the structure is needed
  return UNZ_OK if there is no problem. */


ZEXTERN int ZEXPORT unzGetGlobalComment OF((unzFile file,
                                           char *szComment,
                       uLong uSizeBuf));
/*
  Get the global comment string of the ZipFile, in the szComment buffer.
  uSizeBuf is the size of the szComment buffer.
  return the number of byte copied or an error code <0
*/


/***************************************************************************/
/* Unzip package allow you browse the directory of the zipfile */

ZEXTERN int ZEXPORT unzGoToFirstFile OF((unzFile file));
/*
  Set the current file of the zipfile to the first file.
  return UNZ_OK if there is no problem
*/

ZEXTERN int ZEXPORT unzGoToNextFile OF((unzFile file));
/*
  Set the current file of the zipfile to the next file.
  return UNZ_OK if there is no problem
  return UNZ_END_OF_LIST_OF_FILE if the actual file was the latest.
*/

ZEXTERN int ZEXPORT unzLocateFile OF((unzFile file,
                                      const DWFString& zFilename,
                                      int iCaseSensitivity));
/*
  Try locate the file szFileName in the zipfile.
  For the iCaseSensitivity signification, see unzStringFileNameCompare

  return value :
  UNZ_OK if the file is found. It becomes the current file.
  UNZ_END_OF_LIST_OF_FILE if the file is not found
*/

ZEXTERN int ZEXPORT unzGetCurrentFileInfo OF((unzFile file,
                         unz_file_info *pfile_info,
                         char *szFileName,
                         uLong fileNameBufferSize,
                         void *extraField,
                         uLong extraFieldBufferSize,
                         char *szComment,
                         uLong commentBufferSize));
/*
  Get Info about the current file
  if pfile_info!=NULL, the *pfile_info structure will contain somes info about
        the current file
  if szFileName!=NULL, the filemane string will be copied in szFileName
            (fileNameBufferSize is the size of the buffer)
  if extraField!=NULL, the extra field information will be copied in extraField
            (extraFieldBufferSize is the size of the buffer).
            This is the Central-header version of the extra field
  if szComment!=NULL, the comment string of the file will be copied in szComment
            (commentBufferSize is the size of the buffer)
*/


ZEXTERN void ZEXPORT unzDosDateToTmuDate OF((uLong ulDosDate, tm_unz* ptm));


/***************************************************************************/
/* for reading the content of the current zipfile, you can open it, read data
   from it, and close it (you can close it before reading all the file)
   */

ZEXTERN int ZEXPORT unzOpenCurrentFile OF((unzFile file, const DWFString& zPassword, const DWFString& zFilename = L"" ));

/*
  Open for reading data the current file in the zipfile.
  If there is no error, the return value is UNZ_OK.
  password (const char *password), is used for password encrypted files, and
  should be set to NULL for non-protected files
*/

ZEXTERN int ZEXPORT unzCloseCurrentFile OF((unzFile file));
/*
  Close the file in zip opened with unzOpenCurrentFile
  Return UNZ_CRCERROR if all the file was read but the CRC is not good
*/


ZEXTERN int ZEXPORT unzReadCurrentFile OF((unzFile file,
                      voidp buf,
                      unsigned len));
/*
  Read bytes from the current file (opened by unzOpenCurrentFile)
  buf contain buffer where data must be copied
  len the size of buf.

  return the number of byte copied if somes bytes are copied
  return 0 if the end of file was reached
  return <0 with error code if there is an error
    (UNZ_ERRNO for IO error, or zLib error for uncompress error)
*/

ZEXTERN z_off_t ZEXPORT unztell OF((unzFile file));
/*
  Give the current position in uncompressed data
*/

ZEXTERN int ZEXPORT unzeof OF((unzFile file));
/*
  return 1 if the end of file was reached, 0 elsewhere
*/

ZEXTERN int ZEXPORT unzGetLocalExtrafield OF((unzFile file,
                                             voidp buf,
                                             unsigned len));
/*
  Read extra field from the current file (opened by unzOpenCurrentFile)
  This is the local-header version of the extra field (sometimes, there is
    more info in the local-header version than in the central-header)

  if buf==NULL, it return the size of the local extra field

  if buf!=NULL, len is the size of the buffer, the extra header is copied in
    buf.
  the return value is the number of bytes copied in buf, or (if <0)
    the error code
*/

/*ZEXTERN int ZEXPORT unzIsEncrypted OF((const wchar_t *path));*/
ZEXTERN int ZEXPORT unzIsEncrypted OF((unzFile file));
/*
  By looking at the current file (or first file if there isn't a
  current one) this routine determines whether the zip is password
  protected.  It's assumed that all files in the zip will be
  passworded if one of them is.

  returns 0 if not encrypted
  returns 1 if encrypted
  if return value is < 0 there was an error
*/

#ifdef __cplusplus
}
#endif

#endif /* _unz_H */
