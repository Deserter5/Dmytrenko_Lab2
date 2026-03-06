#pragma once
#include <string>
#include <iostream>

class Engine {
public:
    int horsepower;
    std::string type;

    Engine();
    Engine(int hp, std::string t);

    void showInfo() const;
};