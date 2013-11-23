/**
@file QuackBehaviour.h 
@author ChumpMa#gmail.com
@brief 叫-行为接口
@version 0.0.0.1
@date 2013-11-23
*/

#pragma once

class QuackBehaviour
{
public:
	virtual void Quack() = 0;
};

class CQuack : public QuackBehaviour
{
public:
	void Quack();
};

class CMuteQuack : public QuackBehaviour
{
public:
	void Quack();
};

class CSqueak : public QuackBehaviour
{
public:
	void Quack();
};