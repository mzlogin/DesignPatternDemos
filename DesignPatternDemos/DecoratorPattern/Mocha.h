/**
@file Mocha.h
@author ChumpMa#gmail.com
@brief Ä¦¿¨
@version 0.0.0.1
@date 2014-2-11
*/
#pragma once

#include "CondimentDecorator.h"

class CMocha : public CCondimentDecorator
{
public:
	CMocha();
	CMocha(CBeverage* pBeverage);
	~CMocha();
	
	double Cost();

private:
};