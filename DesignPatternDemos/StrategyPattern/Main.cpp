#include <tchar.h>
#include <stdio.h>
#include "MallardDuck.h"

int _tmain(int argc, wchar_t** argv)
{
	CDuck *pDuck = new CMallardDuck();
	pDuck->SetQuackBehaviour(new CQuack());
	// ѼѼ��ʱ�����ܷɵ�
	pDuck->SetFlyBehaviour(new CFlyWithWings());

	pDuck->Display();
	pDuck->PeformFly();
	pDuck->PerformQuack();

	printf("We change the Duck's FlyBehaviour.\n");

	// ������Ѽ�ӣ�������Ū�ò��ܷ���
	pDuck->SetFlyBehaviour(new CFlyNoWay());
	pDuck->PeformFly();

	return 0;
}