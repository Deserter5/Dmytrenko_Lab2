#include <iostream>
#include <string>

using namespace std;

class Engine {
public:
    int horsepower;
    string type;

    Engine() : horsepower(0), type("Unknown") {}

    Engine(int hp, string t) : horsepower(hp), type(t) {}

    void showInfo() const {
        cout << "   Engine: " << type << ", Power: " << horsepower << " hp" << endl;
    }
};

class Car {
private:
    string model;
    int year;
    Engine engine;
    static int totalCars;

public:
    Car() : model("Base Model"), year(2020), engine(Engine(100, "Gasoline")) {
        totalCars++;
        cout << "Constructor: " << model << " created." << endl;
    }

    Car(string m, int y, Engine e) : model(m), year(y), engine(e) {
        totalCars++;
        cout << "Constructor: " << model << " created." << endl;
    }

    Car(const Car& other) : model(other.model), year(other.year), engine(other.engine) {
        totalCars++;
        cout << "Copy Constructor: Copy of " << model << " created." << endl;
    }

    ~Car() {
        totalCars--;
        cout << "Destructor: " << model << " destroyed." << endl;
    }

    void start() {
        cout << "Car " << model << " started." << endl;
    }

    void stop() {
        cout << "Car " << model << " stopped." << endl;
    }

    void showDetails() {
        cout << "Car Details:" << endl;
        cout << "   Model: " << model << endl;
        cout << "   Year: " << year << endl;
        engine.showInfo();
    }

    static int getTotalCars() {
        return totalCars;
    }
};

int Car::totalCars = 0;

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