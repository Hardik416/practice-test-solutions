#include <iostream>
using namespace std;

class vehicle{
    public:
    string make;
    int year;
    vehicle(){}
    vehicle(string m, int y) : make(m), year(y){}
    virtual void displaydetails(){
        cout << "Make: " << make << "\n";
        cout << "Year: " << year << "\n";
    }
};
class car : public vehicle{
    public:
    string fueltype;
    car(){}
    car(string m, int y, string f) : fueltype(f), vehicle(m, y){}
    void displaydetails(){
        vehicle::displaydetails();
        cout << "Fuel Type: " << fueltype <<"\n";
    }
};
class bike : public vehicle{
    public:
    string enginetype;
    bike(){}
    bike(string m, int y, string e) : enginetype(e), vehicle(m, y){}
    void displaydetails(){
        vehicle::displaydetails();
        cout << "Fuel Type: " << enginetype <<"\n";
    }
};
class truck : public car{
    public:
    string cargocapacity;
    truck(){}
    truck(string m, int y, string f, string c) : cargocapacity(c), car(m, y, f){}
    void displaydetails(){
        car::displaydetails();
        cout << "Cargo Capacity: " << cargocapacity <<" tons\n";
    }
};
int main(){
    string m, f, e, c;
    int y;
    cin >> m >> y >> f;
    car car1(m, y, f);

    cin >> m >> y >> e;
    bike bike1(m, y, e);

    cin >> m >> y >> f >> c;
    truck trk1(m ,y, f, c);

    cout << "Car Details:\n";
    car1.displaydetails();
    cout << "\n";
    cout << "Bike Details:\n";
    bike1.displaydetails();
    cout << "\n";
    cout << "Truck Details\n";
    trk1.displaydetails();
    cout << "\n";

}