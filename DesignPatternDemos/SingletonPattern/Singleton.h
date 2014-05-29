/**
@file Singleton.h
@author ChumpMa#gmail.com
@brief ������
@version 0.0.0.1
@date 2014-5-29
*/

#pragma once

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
    
    static CSingleton* m_sUniqueInstance;
};