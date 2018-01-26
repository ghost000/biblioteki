//
// Created by johnp on 26.01.2018.
//

#include "singleton_dynamic.h"

void calls2()
{
    calls1();
}
std::unique_ptr<Singleton> instance()
{
    return Singleton::instance();
}