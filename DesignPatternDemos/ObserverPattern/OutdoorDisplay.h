/**
@file OutdoorDisplay.h 
@author ChumpMa#gmail.com
@brief  “Õ‚œ‘ æ∆¡¿‡
@version 0.0.0.1
@date 2013-12-08
*/

#pragma once

#include "Observer.h"
#include "DisplayElement.h"
#include "Common.h"

class COutdoorDisplay : public Observer, public DisplayElement
{
public:
	// Observer interface
	void Update(void* pData);

	// DisplayElement interface
	void Display();

private:
	WeatherDataParam m_WeatherParam;
};