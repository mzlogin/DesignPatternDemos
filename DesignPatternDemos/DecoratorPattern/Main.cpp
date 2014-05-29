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
	// À´Ò»±­Å£ÄÌÄ¦¿¨Å¨Ëõ¿§·È
	CBeverage *pBeverage = new CEspresso();
	pBeverage = new CMocha(pBeverage);
	pBeverage = new CMilk(pBeverage);

	printf("It's description : %s\n", pBeverage->GetDescription().c_str());
	printf("It's cost %.2f\n", pBeverage->Cost());

	delete pBeverage;

	return 0;
}