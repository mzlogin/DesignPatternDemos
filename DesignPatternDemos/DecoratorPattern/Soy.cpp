#include "Soy.h"

CSoy::CSoy()
{
}

CSoy::CSoy(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
	m_strDescription = "Soy " + m_pBeverage->GetDescription();
}

CSoy::~CSoy()
{}

double CSoy::Cost()
{
	return 0.5 + m_pBeverage->Cost();
}