#include "Espresso.h"

CEspresso::CEspresso()
{
	m_strDescription = "Espresso Coffee";
}

CEspresso::~CEspresso()
{}

double CEspresso::Cost()
{
	return 1.05;
}