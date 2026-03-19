#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

class Robot{
    public:
    string model, weight;
    Robot(){}
    Robot(string m, string w) : model(m), weight(w){}
};
class Functionality : virtual public Robot{
    public:
    string task_t;
    Functionality(){}
    Functionality(string m, string w, string t) : task_t(t), Robot(m, w){}
};
class EnergySource : virtual public Robot{
    public:
    string energy_t;
    EnergySource(){}
    EnergySource(string m, string w, string e) : energy_t(e), Robot(m, w){}
};
class SmartRobot : public Functionality, public EnergySource{
    public:
    string Ai;
    SmartRobot(){}
    SmartRobot(string m, string w, string t, string e,string a): Robot(m, w), Functionality(m, w, t), EnergySource(m, w, e), Ai(a){}
    void display(){
        cout << "Smart Robot Details:\n";
        cout << "Model Name: " << model << "\n";
        cout << "Weight: " << weight << " kg\n";
        cout << "Task Type: " << task_t << "\n";
        cout << "Energy Source: " << energy_t << "\n";
        cout << "AI Enabled: " << Ai << "\n\n";
    }
};
int main(){
    int n;
    cin >> n;
    while(n--){
    string m, w, e, t, a;
    cin >> m >> w >> t >> e >> a;
    SmartRobot obj(m, w, t, e, a);
    obj.display();
    }
}
