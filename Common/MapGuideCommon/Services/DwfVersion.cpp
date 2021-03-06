//
//  Copyright (C) 2004-2011 by Autodesk, Inc.
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of version 2.1 of the GNU Lesser
//  General Public License as published by the Free Software Foundation.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//

#include "MapGuideCommon.h"
#include "MappingService.h"

MG_IMPL_DYNCREATE(MgDwfVersion)

// Create a DWF specification.  The DWF is specified by both schema and file version
//
MgDwfVersion::MgDwfVersion(CREFSTRING fileVersion, CREFSTRING schemaVersion)
{
    m_fileVersion = fileVersion;
    m_schemaVersion = schemaVersion;
}

// Returns the specified DWF file version string
//
STRING MgDwfVersion::GetFileVersion()
{
    return m_fileVersion;
}

// Sets the supported/required client-side file version for DWF.
//
void MgDwfVersion::SetFileVersion(CREFSTRING fileVersion)
{
    m_fileVersion = fileVersion;
}

// Returns the specified DWF schema version
//
STRING MgDwfVersion::GetSchemaVersion()
{
    return m_schemaVersion;
}

// Sets the supported/required client-side schema version for DWF.
//
void MgDwfVersion::SetSchemaVersion(CREFSTRING schemaVersion)
{
    m_schemaVersion = schemaVersion;
}

// Serialize data to a stream
//
void MgDwfVersion::Serialize(MgStream* stream)
{
    stream->WriteString(m_fileVersion);
    stream->WriteString(m_schemaVersion);
}

// Deserialize data from a stream
//
void MgDwfVersion::Deserialize(MgStream* stream)
{
    MgStreamReader* streamReader = (MgStreamReader*)stream;

    streamReader->GetString(m_fileVersion);
    streamReader->GetString(m_schemaVersion);
}

// Default ctor
//
MgDwfVersion::MgDwfVersion()
{
}
