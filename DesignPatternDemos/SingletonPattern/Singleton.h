/**
@file Singleton.h
@author ChumpMa#gmail.com
@brief ������
@version 0.0.0.1
@date 2014-5-29
*/

#pragma once

#include <Windows.h>

class CSingleton
{
public:
    static CSingleton* GetInstance();

    /** 
    �ͷŵ�����Ӧ���������жԵ��������ʹ����ɺ����
    */
    static void ReleaseInstance();

    void DoSomething();

private:
    CSingleton();
	CSingleton(const CSingleton&);  // private and not implement copy constructor
	CSingleton& operator=(const CSingleton&); // private and not implement = operator
    
    volatile static CSingleton* m_sUniqueInstance;
    static HANDLE m_hSync;
};
