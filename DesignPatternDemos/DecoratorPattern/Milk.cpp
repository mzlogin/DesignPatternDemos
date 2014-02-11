#include "Milk.h"

CMilk::CMilk()
{
}

CMilk::CMilk(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
	m_strDescription = "Milk " + m_pBeverage->GetDescription();
}

CMilk::~CMilk()
{}

double CMilk::Cost()
{
	return 1.05 + m_pBeverage->Cost();
}