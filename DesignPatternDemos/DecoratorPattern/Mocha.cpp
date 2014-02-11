#include "Mocha.h"

CMocha::CMocha()
{
}

CMocha::CMocha(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
	m_strDescription = "Mocha " + m_pBeverage->GetDescription();
}

CMocha::~CMocha()
{}

double CMocha::Cost()
{
	return 0.75 + m_pBeverage->Cost();
}