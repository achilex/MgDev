#ifndef DESKTOP_STYLIZE_LAYER_FAILED_EXCEPTION_H
#define DESKTOP_STYLIZE_LAYER_FAILED_EXCEPTION_H

/// \ingroup Desktop_Exceptions_Module

///////////////////////////////////////////////////////////////////////////////
/// \brief
/// Thrown when a stylize layer fails.
///
class MG_DESKTOP_API MgdStylizeLayerFailedException : public MgApplicationException
{
    DECLARE_CLASSNAME(MgdStylizeLayerFailedException)

EXTERNAL_API:

    ///////////////////////////////////////////////////////////////////////////
    /// \brief
    /// Construct a MgdStylizeLayerFailedException object.
    ///
    /// \param methodName
    /// Name of the method where the exception occurred.
    /// \param lineNumber
    /// Line number where the exception occurred.
    /// \param fileName
    /// File name where the exception occurred.
    /// \param whatArguments
    /// Collection of arguments used to format the message that describes what the exception is.
    /// \param whyMessageId
    /// ID of the message that describes why the exception occurs.
    /// \param whyArguments
    /// Collection of arguments used to format the message that describes why the exception occurs.
    ///
    MgdStylizeLayerFailedException(CREFSTRING methodName, INT32 lineNumber,
        CREFSTRING fileName, MgStringCollection* whatArguments,
        CREFSTRING whyMessageId, MgStringCollection* whyArguments) throw();

    ///////////////////////////////////////////////////////////////////////////
    /// \brief
    /// Destructor for a MgdStylizeLayerFailedException object.
    ///
    virtual ~MgdStylizeLayerFailedException() throw();

INTERNAL_API:

    DECLARE_EXCEPTION_DEFAULTS(MgdStylizeLayerFailedException)

CLASS_ID:

    static const INT32 m_cls_id = MapGuide_Desktop_Exception_StylizeLayerFailedException;
};

#endif