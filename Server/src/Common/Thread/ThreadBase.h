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

#ifndef MGTHREADBASE_H
#define MGTHREADBASE_H

#include "ServerThreadDllExport.h"
#include "Foundation.h"

class MG_SERVER_THREAD_API MgThreadBase : public ACE_Task<ACE_MT_SYNCH>
{
    ///////////////////////////////////////////////////////
    /// Methods
public:
    MgThreadBase (ACE_Thread_Manager &tm, INT32 nThreads);

    // ACE_Task methods
    virtual int svc() = 0;

    // Class methods
    INT32 Activate();

    ///////////////////////////////////////////////////////
    /// Member data
protected:
    INT32 m_nThreads;
};

#endif
