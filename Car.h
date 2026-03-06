#pragma once
#include <string>
#include <iostream>
#include "Engine.h" 

class Car {
private:
    std::string model;
    int year;
    Engine engine;
    static int totalCars; 

public:
    Car();
    Car(std::string m, int y, Engine e);
    Car(const Car& other); 

    ~Car();

    void start();
    void stop();
    void showDetails();

    static int getTotalCars();
};