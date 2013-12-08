#include "WeatherData.h"
#include "Common.h"

CWeatherData::CWeatherData()
{
}

CWeatherData::~CWeatherData()
{
	vector<Observer*>::iterator iter = m_Observers.begin();
	while (iter != m_Observers.end()) 
	{
		delete *iter;
		m_Observers.erase(iter);
		iter = m_Observers.begin();
	}
}

void CWeatherData::RegisterObserver(Observer* pObserver)
{
	m_Observers.push_back(pObserver);
}

void CWeatherData::RemoveObserver(Observer* pObserver)
{
	vector<Observer*>::iterator iter = std::find(m_Observers.begin(), m_Observers.end(), pObserver);
	if (iter != m_Observers.end())
	{
		delete *iter;
		m_Observers.erase(iter);
	}
}

void CWeatherData::NotifyObservers()
{
	WeatherDataParam *pWDP = new WeatherDataParam(m_Temperature, m_Humidity, m_Pressure);
	vector<Observer*>::iterator iter = m_Observers.begin();
	for (; iter != m_Observers.end(); iter++)
	{
		(*iter)->Update(pWDP);
	}
	delete pWDP;
}

void CWeatherData::WeatherChanged(float temperature, float humidity, float pressure)
{
	m_Temperature = temperature;
	m_Humidity = humidity;
	m_Pressure = pressure;
	NotifyObservers();
}