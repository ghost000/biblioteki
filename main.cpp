//
// Created by johnp on 26.01.2018.
//
#include "Singleton/Singleton.cpp"
#include "calls1/Calls1.cpp"
#include "singleton_dynamic/singleton_dynamic.cpp"

auto main() -> int
{
    Singleton::instance()->calls();
    calls1();
    calls2();
    instance()->calls();
    return 0;
}

