/*
Q2: Robotics Control System using Virtual Base Class
- Robot (Virtual Base): model name, weight
- Functionality (derived from Robot): task type
- EnergySource (derived from Robot): energy type
- SmartRobot (derived from Functionality + EnergySource): AI-enabled flag
- Virtual inheritance avoids diamond problem (duplicate Robot data)
Input: N, then "model weight task_type energy_type AI_enabled"
*/

#include <iostream>
#include <string>
using namespace std;

// Virtual Base Class
class Robot {
protected:
    string modelName;
    int weight;
public:
    Robot() {}
    Robot(string m, int w) : modelName(m), weight(w) {}
};

// Derived from Robot (virtual)
class Functionality : virtual public Robot {
protected:
    string taskType;
public:
    Functionality() {}
    Functionality(string t) : taskType(t) {}
};

// Derived from Robot (virtual)
class EnergySource : virtual public Robot {
protected:
    string energyType;
public:
    EnergySource() {}
    EnergySource(string e) : energyType(e) {}
};

// SmartRobot: inherits both - only ONE copy of Robot due to virtual inheritance
class SmartRobot : public Functionality, public EnergySource {
    string aiEnabled;
public:
    SmartRobot(string m, int w, string task, string energy, string ai) {
        modelName = m;
        weight = w;
        taskType = task;
        energyType = energy;
        aiEnabled = ai;
    }

    void displayInfo() {
        cout << "Smart Robot Details:" << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Task Type: " << taskType << endl;
        cout << "Energy Source: " << energyType << endl;
        cout << "AI Enabled: " << aiEnabled << endl;
    }
};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string model, task, energy, ai;
        int weight;
        cin >> model >> weight >> task >> energy >> ai;

        SmartRobot robot(model, weight, task, energy, ai);
        robot.displayInfo();
    }

    return 0;
}
