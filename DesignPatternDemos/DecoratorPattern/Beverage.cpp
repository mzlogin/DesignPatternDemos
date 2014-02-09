#include "Beverage.h"

CBeverage::CBeverage()
{
	m_strDescription = "Unknow beverage";
}

CBeverage::~CBeverage()
{}

string CBeverage::GetDescription()
{
	return m_strDescription;
}