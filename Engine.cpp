#include "Engine.h"

using namespace std;

Engine::Engine() : horsepower(0), type("Unknown") {}

Engine::Engine(int hp, string t) : horsepower(hp), type(t) {}

void Engine::showInfo() const {
    cout << "   Engine: " << type << ", Power: " << horsepower << " hp" << endl;
}