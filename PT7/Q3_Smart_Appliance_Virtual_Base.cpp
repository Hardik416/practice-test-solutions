/*
Q3: Smart Home Appliance Control using Virtual Base Class
- Appliance (Virtual Base): brand, power (watts)
- WiredDevice (derived from Appliance virtual): voltage rating
- WirelessDevice (derived from Appliance virtual): network type
- SmartAppliance (derived from WiredDevice + WirelessDevice)
- Virtual inheritance avoids duplicate Appliance data
Input: N, then "brand power voltage network_type"
*/

#include <iostream>
#include <string>
using namespace std;

// Virtual Base Class
class Appliance {
protected:
    string brand;
    int power;
public:
    Appliance() {}
};

// Derived from Appliance (virtual)
class WiredDevice : virtual public Appliance {
protected:
    int voltage;
public:
    WiredDevice() {}
};

// Derived from Appliance (virtual)
class WirelessDevice : virtual public Appliance {
protected:
    string networkType;
public:
    WirelessDevice() {}
};

// SmartAppliance: inherits both - ONE copy of Appliance
class SmartAppliance : public WiredDevice, public WirelessDevice {
public:
    SmartAppliance(string b, int p, int v, string net) {
        brand = b;
        power = p;
        voltage = v;
        networkType = net;
    }

    void displayInfo() {
        cout << "Smart Appliance Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Power: " << power << " W" << endl;
        cout << "Voltage: " << voltage << " V" << endl;
        cout << "Network Type: " << networkType << endl;
    }
};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string brand, netType;
        int power, voltage;
        cin >> brand >> power >> voltage >> netType;

        SmartAppliance sa(brand, power, voltage, netType);
        sa.displayInfo();
    }

    return 0;
}
