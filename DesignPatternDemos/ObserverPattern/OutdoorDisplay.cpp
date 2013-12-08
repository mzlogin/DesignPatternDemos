#include "OutdoorDisplay.h"
#include <stdio.h>

void COutdoorDisplay::Update(void* pData)
{
	if (nullptr == pData)
	{
		return;
	}

	WeatherDataParam *pWDP = (WeatherDataParam*)pData;
	m_WeatherParam = *pWDP;
}

void COutdoorDisplay::Display()
{
	printf("\nOutdoor Temperature report: \n");
	printf("Temperature: %2f\n", m_WeatherParam.m_Temperature);
	printf("Humidity: %2f\n", m_WeatherParam.m_Humidity);
	printf("Pressure: %2f\n", m_WeatherParam.m_Pressure);
}