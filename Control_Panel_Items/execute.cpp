#include "execute.h"
#include "pch.h"

extern "C" __declspec(dllexport) LONG CPlApplet(
    HWND hwndCpl,
    UINT msg,
    LPARAM lParam1,
    LPARAM lParam2
)
{
    //Puts malicious code here
    
    ExitProcess(0); //close all running process because on windows 7, rundll32.exe will  be crashed
    return 1;
}

extern "C" __declspec(dllexport) void Faker()
{
    //puts fake code here
    //This export module will trick user about real purpose
    
}