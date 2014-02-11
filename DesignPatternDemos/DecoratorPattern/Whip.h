/**
@file Whip.h
@author ChumpMa#gmail.com
@brief длещ
@version 0.0.0.1
@date 2014-2-11
*/

#include "CondimentDecorator.h"

class CWhip : public CCondimentDecorator
{
public:
	CWhip();
	CWhip(CBeverage* pBeverage);
	~CWhip();
	
	double Cost();

private:
};