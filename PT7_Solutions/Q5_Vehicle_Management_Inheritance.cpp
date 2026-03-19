/*
Q5: Vehicle Management System Using Hierarchical Inheritance
- Base: Vehicle (common properties)
- Car: model, fuel_capacity, mileage, seating_capacity
- Bike: model, engine_capacity, mileage, type (sports/cruiser)
Input: N, then "car/bike model ..." per line
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle {
protected:
    string model;
    int mileage;
public:
    Vehicle() {}
    virtual void display() = 0;
    virtual ~Vehicle() {}
};

// Car
class Car : public Vehicle {
    int fuelCapacity;
    int seatingCapacity;
public:
    Car(string m, int fc, int mil, int sc) {
        model = m;
        fuelCapacity = fc;
        mileage = mil;
        seatingCapacity = sc;
    }
    void display() {
        cout << "Vehicle Type: Car" << endl;
        cout << "Model: " << model << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " L" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
};

// Bike
class Bike : public Vehicle {
    int engineCapacity;
    string bikeType;
public:
    Bike(string m, int ec, int mil, string t) {
        model = m;
        engineCapacity = ec;
        mileage = mil;
        bikeType = t;
    }
    void display() {
        cout << "Vehicle Type: Bike" << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Type: " << bikeType << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Vehicle* vehicles[105];

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type == "car") {
            string model; int fc, mil, sc;
            cin >> model >> fc >> mil >> sc;
            vehicles[i] = new Car(model, fc, mil, sc);
        } else { // bike
            string model, btype; int ec, mil;
            cin >> model >> ec >> mil >> btype;
            vehicles[i] = new Bike(model, ec, mil, btype);
        }
    }

    for (int i = 0; i < n; i++) {
        vehicles[i]->display();
        delete vehicles[i];
    }

    return 0;
}
