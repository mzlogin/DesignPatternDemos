/**
@file IndoorDisplay.h 
@author ChumpMa#gmail.com
@brief  “ƒ⁄œ‘ æ∆¡¿‡
@version 0.0.0.1
@date 2013-12-08
*/

#pragma once

#include "Observer.h"
#include "Observable.h"
#include "DisplayElement.h"
#include "Common.h"

class CIndoorDisplay : public Observer, public DisplayElement
{
public:
	CIndoorDisplay();
	~CIndoorDisplay();

	// Observer interface
	void Update(void* pData);

	// DisplayElement interface
	void Display();

private:
	WeatherDataParam m_WeatherParam;
};