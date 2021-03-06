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
#include "TestLogManagerThread.h"
#include "ServerManager.h"
#include "LogType.h"
#include "LogManager.h"

TestLogManagerThread::TestLogManagerThread(ACE_Thread_Manager &tm) :
    ACE_Task<ACE_MT_SYNCH>(&tm)
{
    activate(THR_DETACHED, 5);
}

int TestLogManagerThread::svc()
{
    MgLogManager* pMan = MgLogManager::GetInstance();
    if (NULL == pMan)
    {
        throw new MgNullReferenceException(L"TestLogManagerThread.svc", __LINE__, __WFILE__, NULL, L"", NULL);
    }

    INT32 nResult = 0;

    INT32 i;
        Ptr<MgByteReader> reader;
    for (i = 0; i < 500; i++)
    {
        reader = pMan->GetAdminLog();
        reader = pMan->GetAdminLog(5);
        pMan->ClearAdminLog();
        reader = pMan->GetAdminLog(&fromDate, &toDate);
    }

    return nResult;
}
