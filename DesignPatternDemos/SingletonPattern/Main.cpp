#include "Singleton.h"

int main()
{
    CSingleton::GetInstance()->DoSomething();

    //CSingleton ObjA(*CSingleton::GetInstance());  // error : private and no implement copy constructor
	//CSingleton ObjB = *CSingleton::GetInstance();  // error : private and no implement = operator

	CSingleton::ReleaseInstance();

    return 0;
}