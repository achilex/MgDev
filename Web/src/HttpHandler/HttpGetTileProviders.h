//
//  Copyright (C) 2004-2014 by Autodesk, Inc.
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

#ifndef _FS_GET_TILE_PROVIDERS_H
#define _FS_GET_TILE_PROVIDERS_H

class MgHttpGetTileProviders : public MgHttpRequestResponseHandler
{
HTTP_DECLARE_CREATE_OBJECT()

public:
    /// <summary>
    /// Initializes the common parameters of the request.
    /// </summary>
    /// <param name="name">Input
    /// MgHttpRequest
    /// This contains all the parameters of the request.
    /// </param>
    /// <returns>
    /// nothing
    /// </returns>
    MgHttpGetTileProviders(MgHttpRequest *hRequest);

    /// <summary>
    /// Executes the specific request.
    /// </summary>
    /// <param name="hResponse">Input
    /// This contains the response (including MgHttpResult and StatusCode) from the server.
    /// </param>
    void Execute(MgHttpResponse& hResponse);

    /// <summary>
    /// Returns the classification of this request/response handler
    /// </summary>
    /// <returns>
    /// Classification of handler
    /// </returns>
    MgRequestClassification GetRequestClassification() { return MgHttpRequestResponseHandler::mrcViewer; }

protected:
    /// <summary>
    /// This method is responsible for checking if
    /// a valid version was given
    /// </summary>
    /// <returns>Returns nothing</returns>
    virtual void ValidateOperationVersion();

};

#endif  // _FS_GET_TILE_PROVIDERS_H