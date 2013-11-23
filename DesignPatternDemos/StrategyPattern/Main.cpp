#include <tchar.h>
#include <stdio.h>
#include "MallardDuck.h"

int _tmain(int argc, wchar_t** argv)
{
	CDuck *pDuck = new CMallardDuck();
	pDuck->SetQuackBehaviour(new CQuack());
	// 鸭鸭这时候还是能飞的
	pDuck->SetFlyBehaviour(new CFlyWithWings());

	pDuck->Display();
	pDuck->PeformFly();
	pDuck->PerformQuack();

	printf("We change the Duck's FlyBehaviour.\n");

	// 可怜的鸭子，被我们弄得不能飞了
	pDuck->SetFlyBehaviour(new CFlyNoWay());
	pDuck->PeformFly();

	return 0;
}