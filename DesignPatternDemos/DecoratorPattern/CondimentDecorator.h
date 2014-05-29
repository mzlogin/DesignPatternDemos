/**
@file CondimentDecorator.h
@author ChumpMa#gmail.com
@brief 调料装饰者类
@version 0.0.0.1
@date 2014-2-11
*/
#pragma once

#include "Beverage.h"

class CCondimentDecorator : public CBeverage
{
public:
	CCondimentDecorator();
	~CCondimentDecorator();
	
	virtual double Cost() = 0;

protected:
	CBeverage* m_pBeverage;
};