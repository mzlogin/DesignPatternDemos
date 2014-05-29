#include "Singleton.h"

int main()
{
    CSingleton::GetInstance()->DoSomething();

	CSingleton::ReleaseInstance();

    return 0;
}