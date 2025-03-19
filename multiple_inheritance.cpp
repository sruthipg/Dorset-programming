#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void startEngine() {
        cout << "Engine started..." << endl;
    }
};

// Base class 2
class Wheels {
public:
    void rotateWheels() {
        cout << "Wheels rotating..." << endl;
    }
};

// Derived class
class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is moving..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine();
    myCar.rotateWheels();
    myCar.drive();
    return 0;
}
