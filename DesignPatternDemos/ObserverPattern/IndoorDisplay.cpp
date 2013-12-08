#include "IndoorDisplay.h"
#include <stdio.h>

CIndoorDisplay::CIndoorDisplay() : m_WeatherParam(0.0, 0.0, 0.0)
{}

void CIndoorDisplay::Update(void* pData)
{
	if (NULL == pData)
	{
		return;
	}

	WeatherDataParam *pWDP = (WeatherDataParam*)pData;
	m_WeatherParam = *pWDP;
}

void CIndoorDisplay::Display()
{
	printf("\nIndoor Temperature report: \n");
	printf("Temperature: %2f\n", m_WeatherParam.m_Temperature);
	printf("Humidity: %2f\n", m_WeatherParam.m_Humidity);
	printf("Pressure: %2f\n", m_WeatherParam.m_Pressure);
}