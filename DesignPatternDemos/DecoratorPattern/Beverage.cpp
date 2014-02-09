#include "Beverage.h"

string CBeverage::m_strDescription = "Unknow beverage";

CBeverage::CBeverage()
{}

CBeverage::~CBeverage()
{}

string CBeverage::GetDescription()
{
	return m_strDescription;
}