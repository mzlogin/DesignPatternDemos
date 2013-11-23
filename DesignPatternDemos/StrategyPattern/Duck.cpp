#include "Duck.h"
#include <stdio.h>

CDuck::CDuck() : m_flyBehaviour(0), m_quackBehaviour(0)
{}

CDuck::~CDuck()
{
	if (m_flyBehaviour)
	{
		delete m_flyBehaviour;
		m_flyBehaviour = 0;
	}

	if (m_quackBehaviour)
	{
		delete m_quackBehaviour;
		m_quackBehaviour = 0;
	}
}

void CDuck::SetFlyBehaviour(FlyBehaviour *flyBehaviour)
{
	if (m_flyBehaviour)
	{
		delete m_flyBehaviour;
		m_flyBehaviour = 0;
	}
	m_flyBehaviour = flyBehaviour;
}

void CDuck::SetQuackBehaviour(QuackBehaviour *quackBehaviour)
{
	if (m_quackBehaviour)
	{
		delete m_quackBehaviour;
		m_quackBehaviour = 0;
	}
	m_quackBehaviour = quackBehaviour;
}

void CDuck::PeformFly()
{
	m_flyBehaviour->Fly();
}

void CDuck::PerformQuack()
{
	m_quackBehaviour->Quack();
}

void CDuck::Swim()
{
	printf("Duck swim.\n");
}

void CDuck::Display()
{
	printf("Duck display.\n");
}