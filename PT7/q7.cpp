#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// Base class
class Vehicle {
public:
    virtual void displayInfo() const = 0;  // Pure virtual function
};

// Car class inheriting from Vehicle
class Car : public Vehicle {
private:
    string model;
    int fuelCapacity, mileage, seatingCapacity;
public:
    Car(string model, int fuelCapacity, int mileage, int seatingCapacity) 
        : model(model), fuelCapacity(fuelCapacity), mileage(mileage), seatingCapacity(seatingCapacity) {}

    void displayInfo() const override {
        cout << "Vehicle Type: Car" << endl;
        cout << "Model: " << model << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " L" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl << endl;
    }
};

// Bike class inheriting from Vehicle
class Bike : public Vehicle {
private:
    string model, type;
    int engineCapacity, mileage;
public:
    Bike(string model, int engineCapacity, int mileage, string type) 
        : model(model), engineCapacity(engineCapacity), mileage(mileage), type(type) {}

    void displayInfo() const override {
        cout << "Vehicle Type: Bike" << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Type: " << type << endl << endl;
    }
};

// Driver function
int main() {
    int N;
    cin >> N;
    Vehicle* vehicles[2];

    for (int i = 0; i < N; i++) {
        string type;
        cin >> type;

        if (type == "car") {
            string model;
            int fuelCapacity, mileage, seatingCapacity;
            cin >> model >> fuelCapacity >> mileage >> seatingCapacity;
            vehicles[i] = new Car(model, fuelCapacity, mileage, seatingCapacity);
        } 
        else if (type == "bike") {
            string model, bikeType;
            int engineCapacity, mileage;
            cin >> model >> engineCapacity >> mileage >> bikeType;
            vehicles[i] = new Bike(model, engineCapacity, mileage, bikeType);
        }
    }

    for (int i = 0; i < N; i++) {
        vehicles[i]->displayInfo();
        delete vehicles[i];
    }

    return 0;
}