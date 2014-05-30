#include "Singleton.h"

CSingleton* CSingleton::m_sUniqueInstance = NULL;
HANDLE CSingleton::m_hSync = ::CreateEvent(NULL, FALSE, TRUE, NULL);

CSingleton::CSingleton()
{
}

CSingleton* CSingleton::GetInstance()
{
    if (NULL == m_sUniqueInstance)
	{
        WaitForSingleObject(m_hSync, INFINITE);
        if (NULL == m_sUniqueInstance)
		{
            m_sUniqueInstance = new CSingleton();
		}
        SetEvent(m_hSync);
	}

    return m_sUniqueInstance;
}

void CSingleton::ReleaseInstance()
{
    if (0 != m_sUniqueInstance)
	{
        delete m_sUniqueInstance;
        m_sUniqueInstance = NULL;
	}

    if (NULL != m_hSync)
	{
        CloseHandle(m_hSync);
	}
}

void CSingleton::DoSomething()
{
}