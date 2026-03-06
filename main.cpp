#include <iostream>
#include "Car.h"
#include "Engine.h"

using namespace std;

int main() {
    cout << "Current car count: " << Car::getTotalCars() << endl << endl;

    Car car1;
    car1.showDetails();
    cout << endl;

    Engine engine2(250, "Diesel");
    Car car2("BMW X5", 2023, engine2);
    car2.showDetails();
    car2.start();
    cout << endl;

    Engine engine3(400, "Electric");
    Car* car3 = new Car("Tesla Model S", 2024, engine3);
    car3->showDetails();
    cout << endl;

    Car car4 = car2;
    cout << "Details of car4 (Copy of BMW):" << endl;
    car4.showDetails();
    cout << endl;

    Engine engine5(180, "Hybrid");
    Car car5("Toyota Camry", 2022, engine5);
    car5.showDetails();
    cout << endl;

    cout << "Total cars created: " << Car::getTotalCars() << endl << endl;

    delete car3;

    cout << "Total cars after deleting dynamic object: " << Car::getTotalCars() << endl << endl;

    return 0;
}