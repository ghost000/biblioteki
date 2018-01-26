//
// Created by johnp on 26.01.2018.
//

#include "Singleton.h"

std::unique_ptr<Singleton> Singleton::Instance = nullptr;

Singleton::Singleton()
{
    std::cout << " address of instance: "<< std::addressof(Instance) << " + " << std::endl;
}
std::unique_ptr<Singleton> Singleton::instance()
{
    if (Instance == nullptr)
    {
        Instance.reset(new Singleton);
    }
    return std::move(Instance);
}
Singleton::~Singleton()
{
    std::cout << " address of instance: "<< std::addressof(Instance) << " - " << std::endl;
}
void Singleton::calls()
{
    count++;
    std::cout << " address of instance: "<< std::addressof(Instance) << "  " << count << std::endl;
}