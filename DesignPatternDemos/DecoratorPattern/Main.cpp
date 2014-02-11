#include <tchar.h>
#include <stdio.h>
#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

int _tmain(int argc, wchar_t** argv)
{
	// ��һ��ţ��Ħ��Ũ������
	CBeverage *pBeverage = new CEspresso();
	pBeverage = new CMocha(pBeverage);
	pBeverage = new CMilk(pBeverage);

	printf("It's description : %s\n", pBeverage->GetDescription());
	printf("It's cost %d\n", pBeverage->Cost());

	return 0;
}