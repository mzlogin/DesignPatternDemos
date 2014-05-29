#include "Singleton.h"

CSingleton* CSingleton::m_sUniqueInstance = 0;

CSingleton::CSingleton()
{
}

CSingleton* CSingleton::GetInstance()
{
    if (0 == m_sUniqueInstance)
	{
        m_sUniqueInstance = new CSingleton();
	}

    return m_sUniqueInstance;
}

void CSingleton::ReleaseInstance()
{
    if (0 != m_sUniqueInstance)
	{
        delete m_sUniqueInstance;
        m_sUniqueInstance = 0;
	}
}

void CSingleton::DoSomething()
{
}