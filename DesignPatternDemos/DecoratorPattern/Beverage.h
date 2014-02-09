/**
@file Beverage.h
@author ChumpMa#gmail.com
@brief ÒûÁÏ»ùÁÏ
@version 0.0.0.1
@date 2014-2-9
*/

#include <string>
using namespace std;

class CBeverage
{
public:
	CBeverage();
	~CBeverage();

	string GetDescription();
	virtual void Cost() = 0;

private:
	static string m_strDescription;
};