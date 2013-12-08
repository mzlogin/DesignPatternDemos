/**
@file Observer.h 
@author ChumpMa#gmail.com
@brief 观察者接口
@version 0.0.0.1
@date 2013-12-8
*/

#pragma once 

class Observer
{
public:
	virtual void Update(void* pData) = 0;
};