#include "Whip.h"

CWhip::CWhip()
{
}

CWhip::CWhip(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
	m_strDescription = "Whip " + m_pBeverage->GetDescription();
}

CWhip::~CWhip()
{
	if (m_pBeverage)
	{
		delete m_pBeverage;
		m_pBeverage = NULL;
	}
}

double CWhip::Cost()
{
	return 0.6 + m_pBeverage->Cost();
}