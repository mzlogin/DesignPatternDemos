/**
@file Singleton.h
@author ChumpMa#gmail.com
@brief 单例类
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
    释放单例，应仅限于所有对单例类的使用完成后使用
    */
    static void ReleaseInstance();

    void DoSomething();

private:
    CSingleton();
    
    volatile static CSingleton* m_sUniqueInstance;
    static HANDLE m_hSync;
};