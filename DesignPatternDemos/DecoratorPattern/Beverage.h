/**
@file Beverage.h
@author ChumpMa#gmail.com
@brief ÒûÁÏ»ùÁÏ
@version 0.0.0.1
@date 2014-2-9
*/
#pragma once

#include <string>
using namespace std;

class CBeverage
{
public:
	CBeverage();
	virtual ~CBeverage();

	string GetDescription();
	virtual double Cost() = 0;

protected:
	string m_strDescription;
};