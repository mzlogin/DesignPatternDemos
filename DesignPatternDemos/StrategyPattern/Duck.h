/**
@file duck.h
@author ChumpMa#gmail.com
@brief Ѽ-����
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

	/** Ѽ�����п����޵���Ϊ���ɺͽУ����������behaviour���� */
	void PeformFly();
	void PerformQuack();

	/** ��ͬ����Ϊ������ʹ�ó���Duck�ģ�Ҳ�����Լ��ػ� */
	virtual void Swim(); 
	virtual void Display();

private:
	FlyBehaviour *m_flyBehaviour;
	QuackBehaviour *m_quackBehaviour;
};