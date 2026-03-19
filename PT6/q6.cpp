#include <iostream>
#include <iomanip>

using namespace std;

class Shape{
    public:
    virtual void calculateVolume() = 0;
};
class Sphere : public Shape{
    public:
    double radius;
    Sphere(int r) : radius(r){}
    void calculateVolume(){
        double volume = (4/3.0)*3.14*radius*radius*radius;
        cout << "Volume of sphere is "<< fixed << setprecision(3) << volume<<"\n";
    }
};
class Cylinder : public Shape{
    public:
    double radius, height;
    Cylinder(int r, int h) : radius(r), height(h){}
    void calculateVolume(){
        double volume = 3.14*radius*radius*height;
        cout << "Volume of cylinder is "<< fixed << setprecision(3) << volume<<"\n";
    }
};
class Cone : public Shape{
    public:
    double radius, height;
    Cone(int r, int h) : radius(r), height(h) {}
    void calculateVolume(){
        double volume = (1/3.0)*3.14*radius*radius*height;
        cout << "Volume of cone is "<< fixed << setprecision(3) << volume<<"\n";
    }
};
class Cube : public Shape{
    public:
    double radius;
    Cube(int r) : radius(r){}
    void calculateVolume(){
        double volume = radius*radius*radius;
        cout << "Volume of cube is "<< fixed << setprecision(3) << volume<<"\n";
    }
};

int main(){
    int choice;
    cin >> choice;
    Shape* shape = nullptr;
    double radius, height;
    switch(choice){
        case 1:
        cin >> radius;
        shape = new Sphere(radius);
        break;
        case 2:
        cin >> radius >> height;
        shape = new Cylinder(radius, height);
        break;
        case 3:
        cin >> radius >> height;
        shape = new Cone(radius, height);
        break;
        case 4:
        cin >> radius;
        shape = new Cube(radius);
        break;
        default:
        cout << "wrong choice\n";
    }
    if(shape){
        shape->calculateVolume();
        delete shape;
    }
}