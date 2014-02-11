/**
@file Milk.h
@author ChumpMa#gmail.com
@brief еёдл
@version 0.0.0.1
@date 2014-2-11
*/

#include "CondimentDecorator.h"

class CMilk : public CCondimentDecorator
{
public:
	CMilk();
	CMilk(CBeverage* pBeverage);
	~CMilk();
	
	double Cost();

private:
};