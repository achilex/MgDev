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
#include "stdafx.h"
#include "TileStoreParameters.h"

TileStoreParameters::TileStoreParameters()
    : m_format(L"PNG"),
      m_width(300),
      m_height(300)
{
    
}

TileStoreParameters::~TileStoreParameters()
{

}

// Operations
// Property : Parameters
NameStringPairCollection* TileStoreParameters::GetParameters()
{
    return &this->m_parameters;
}

// Property : TileProvider
const MdfString& TileStoreParameters::GetTileProvider() const
{
    return this->m_provider;
}

void TileStoreParameters::SetTileProvider(const MdfString &provider)
{
    this->m_provider = provider;
}