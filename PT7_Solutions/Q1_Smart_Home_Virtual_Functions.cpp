/*
Q1: Smart Home Device Management Using Virtual Functions
- Base abstract class: SmartDevice (device ID + pure virtual displayInfo())
- SmartLight: brightness level
- SmartLock: lock status (Locked/Unlocked)
- SmartThermostat: temperature in Celsius
Input: N, then "Light/Lock/Thermostat deviceID info"
*/

#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class SmartDevice {
protected:
    string deviceID;
public:
    SmartDevice(string id) : deviceID(id) {}
    virtual void displayInfo() = 0;  // pure virtual
    
};

// Derived: SmartLight
class SmartLight : public SmartDevice {
    int brightness;
public:
    SmartLight(string id, int b) : SmartDevice(id), brightness(b) {}
    void displayInfo() {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Brightness Level: " << brightness << "%" << endl;
    }
};

// Derived: SmartLock
class SmartLock : public SmartDevice {
    string status;
public:
    SmartLock(string id, string s) : SmartDevice(id), status(s) {}
    void displayInfo() {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Lock Status: " << status << endl;
    }
};

// Derived: SmartThermostat
class SmartThermostat : public SmartDevice {
    int temperature;
public:
    SmartThermostat(string id, int t) : SmartDevice(id), temperature(t) {}
    void displayInfo() {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Current Temperature: " << temperature << "°C" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    SmartDevice* devices[n];

    for (int i = 0; i < n; i++) {
        string type, id;
        cin >> type >> id;

        if (type == "Light") {
            int b; cin >> b;
            devices[i] = new SmartLight(id, b);
        } else if (type == "Lock") {
            string s; cin >> s;
            devices[i] = new SmartLock(id, s);
        } else { // Thermostat
            int t; cin >> t;
            devices[i] = new SmartThermostat(id, t);
        }
    }

    for (int i = 0; i < n; i++) {
        devices[i]->displayInfo();
        delete devices[i];
    }

    return 0;
}
