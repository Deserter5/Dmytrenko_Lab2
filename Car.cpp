#include "Car.h"

using namespace std;

int Car::totalCars = 0;

Car::Car() : model("Base Model"), year(2020), engine(Engine(100, "Gasoline")) {
    totalCars++;
    cout << "Constructor: " << model << " created." << endl;
}

Car::Car(string m, int y, Engine e) : model(m), year(y), engine(e) {
    totalCars++;
    cout << "Constructor: " << model << " created." << endl;
}

Car::Car(const Car& other) : model(other.model), year(other.year), engine(other.engine) {
    totalCars++;
    cout << "Copy Constructor: Copy of " << model << " created." << endl;
}

Car::~Car() {
    totalCars--;
    cout << "Destructor: " << model << " destroyed." << endl;
}

void Car::start() {
    cout << "Car " << model << " started." << endl;
}

void Car::stop() {
    cout << "Car " << model << " stopped." << endl;
}

void Car::showDetails() {
    cout << "Car Details:" << endl;
    cout << "   Model: " << model << endl;
    cout << "   Year: " << year << endl;
    engine.showInfo();
}

int Car::getTotalCars() {
    return totalCars;
}