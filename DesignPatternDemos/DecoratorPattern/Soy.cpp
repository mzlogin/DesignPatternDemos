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
{
	if (m_pBeverage)
	{
		delete m_pBeverage;
		m_pBeverage = NULL;
	}
}

double CSoy::Cost()
{
	return 0.5 + m_pBeverage->Cost();
}