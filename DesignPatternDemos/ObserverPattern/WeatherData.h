/**
@file WeatherData.h 
@author ChumpMa#gmail.com
@brief 天气数据类 
@version 0.0.0.1
@date 2013-12-08
*/

#pragma once 

#include "Observable.h"
#include "Observer.h"
#include <vector>
using std::vector;

class CWeatherData : public Observable
{
public:
	CWeatherData();
	~CWeatherData();

	// Observable interface
	void RegisterObserver(Observer* pObserver);
	void RemoveObserver(Observer* pObserver);
	void NotifyObservers();

	void WeatherChanged(float temperature, float humidity, float pressure);
	
private:
	vector<Observer*> m_Observers;
	float m_Temperature;
	float m_Humidity;
	float m_Pressure;
};