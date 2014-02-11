#include "Decaf.h"

CDecaf::CDecaf()
{
	m_strDescription = "Decaf Coffee";
}

CDecaf::~CDecaf()
{}

double CDecaf::Cost()
{
	return 1.05;
}