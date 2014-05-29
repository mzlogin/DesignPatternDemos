/**
@file Soy.h
@author ChumpMa#gmail.com
@brief ¶¹½¬
@version 0.0.0.1
@date 2014-2-11
*/
#pragma once

#include "CondimentDecorator.h"

class CSoy : public CCondimentDecorator
{
public:
	CSoy();
	CSoy(CBeverage* pBeverage);
	~CSoy();
	
	double Cost();

private:
};