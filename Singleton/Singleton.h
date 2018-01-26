//
// Created by johnp on 26.01.2018.
//
#pragma once

#include <iostream>
#include <memory>

class Singleton final
{
public:
    ~Singleton();
    static std::unique_ptr<Singleton> instance();
    void calls();
    Singleton(Singleton const&)      = delete;
    void operator=(Singleton const&) = delete;
private:
    Singleton();
    static std::unique_ptr<Singleton> Instance;
    unsigned                          count;
};