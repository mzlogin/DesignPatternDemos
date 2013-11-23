/**
@file duck.h
@author ChumpMa#gmail.com
@brief 鸭-基类
@version 0.0.0.1
@date 2013-11-23
*/

#pragma once

#include "FlyBehaviour.h"
#include "QuackBehaviour.h"

class CDuck 
{
public:
	CDuck();

	~CDuck();

	void SetFlyBehaviour(FlyBehaviour* flyBehaviour);

	void SetQuackBehaviour(QuackBehaviour* quackBehaviour);

	/** 鸭可能有可能无的行为：飞和叫，分离出来由behaviour处理 */
	void PeformFly();
	void PerformQuack();

	/** 共同的行为，可能使用超类Duck的，也可以自己特化 */
	virtual void Swim(); 
	virtual void Display();

private:
	FlyBehaviour *m_flyBehaviour;
	QuackBehaviour *m_quackBehaviour;
};