#pragma once
#include <Windows.h>

extern "C" __declspec(dllexport) LONG CPlApplet(
    HWND hwndCpl,
    UINT msg,
    LPARAM lParam1,
    LPARAM lParam2
);

extern "C" __declspec(dllexport) void Faker();