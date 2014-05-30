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
    �ͷŵ�����Ӧ���������жԵ������ʹ����ɺ�ʹ��
    */
    static void ReleaseInstance();

    void DoSomething();

private:
    CSingleton();
    
    volatile static CSingleton* m_sUniqueInstance;
    static HANDLE m_hSync;
};