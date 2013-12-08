/**
@file Common.h 
@author ChumpMa#gmail.com
@brief 一些公用的数据结构定义等
@version 0.0.0.1
@date 2013-12-08
*/

#pragma once

struct WeatherDataParam
{
	WeatherDataParam(): m_Temperature(0.0), m_Humidity(0.0), m_Pressure(0.0) 
	{}

	WeatherDataParam(float temperature, float humidity, float pressure) : 
		m_Temperature(temperature), m_Humidity(humidity), m_Pressure(pressure)
	{}

	const WeatherDataParam& operator=(const WeatherDataParam& weatherData)
	{
		m_Temperature = weatherData.m_Temperature;
		m_Humidity = weatherData.m_Humidity;
		m_Pressure = weatherData.m_Pressure;

		return *this;
	}

	float m_Temperature;
	float m_Humidity;
	float m_Pressure;
};