/**
@file Observable.h 
@author ChumpMa#gmail.com
@brief 可被观察接口
@version 0.0.0.1
@date 2013-12-8
*/

#pragma once

#include "Observer.h"

class Observable
{
public:
	virtual void RegisterObserver(Observer* pObserver) = 0;
	virtual void RemoveObserver(Observer* pObserver) = 0;
	virtual void NotifyObservers() = 0;
};