/**
@file FlyBehaviour.h 
@author ChumpMa#gmail.com
@brief ��-��Ϊ�ӿ�--������ʵ�ִ˽ӿڵ���Ϊ��
@version 0.0.0.1
@date 2013-11-23
*/

#pragma once

class FlyBehaviour
{
public:
	virtual void Fly() = 0;
};

class CFlyWithWings : public FlyBehaviour
{
public:
	void Fly();
};

class CFlyNoWay : public FlyBehaviour
{
public:
	void Fly();
};