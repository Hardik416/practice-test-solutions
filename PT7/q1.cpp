#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

class Smartdevice{
    public:
    string deviceID;
    Smartdevice(){}
    Smartdevice(string i) : deviceID(i){}
    virtual void displayinfo() = 0;
};
class Smartlight : public Smartdevice{
    public:
    int bright;
    Smartlight(){}
    Smartlight(string i, int b) : bright(b), Smartdevice(i){}
    void displayinfo() override{
        cout << "Smart Device Details:\n";
        cout << "Device ID: " << deviceID << "\n";
        cout << "Brightness Level: " << bright << "%\n";
        cout << "\n";
    }
};
class Smartlock : public Smartdevice{
    public:
    string lock;
    Smartlock(){}
    Smartlock(string i, string l) : lock(l), Smartdevice(i){}
    void displayinfo() override{
        cout << "Smart Device Details:\n";
        cout << "Device ID: " << deviceID << "\n";
        cout << "Lock Status: " << lock << "\n";
        cout << "\n";
    }
};
class Smartthermostat: public Smartdevice{
    public:
    int temp;
    Smartthermostat(){}
    Smartthermostat(string i, int t) : temp(t), Smartdevice(i){}
    void displayinfo() override{
        cout << "Smart Device Details:\n";
        cout << "Device ID: " << deviceID << "\n";
        cout << "Current Temperature: " << temp << "°C\n";
        cout << "\n";
    }
};

int main(){
    int n;
    cin >> n;

    Smartdevice* devices[n];
    for(int i = 0; i < n; i++){
        string device_type, device_id;
        cin >> device_type >> device_id;
        if(device_type == "Light"){
            int brightness;
            cin >> brightness;
            devices[i] = new Smartlight(device_id, brightness);
        }
        else if(device_type == "Lock"){
            string lock;
            cin >> lock;
            devices[i] = new Smartlock(device_id, lock);
        }
        else if(device_type == "Thermostat"){
            int temp;
            cin >> temp;
            devices[i] = new Smartthermostat(device_id, temp);
        }
    }
    for(int i = 0;i < n; i++){
        devices[i]->displayinfo();
        delete devices[i];
    }
}