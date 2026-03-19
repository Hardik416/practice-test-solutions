/*
Q6: Advanced Shape Hierarchy with Multiple Inheritance
- Shape (abstract base): pure virtual area()
- Rectangle (from Shape): width, height
- Circle (from Shape): radius
- Colored: color attribute
- ColoredRectangle (from Rectangle + Colored)
- ColoredCircle (from Circle + Colored)
Input: N, then "rectangle w h color" or "circle r color"
Output: Shape, Color, dimensions, area (2 decimal places)
PI = 3.14159265358979
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const double PI = 3.14159265358979;

// Abstract Base
class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

// Colored attribute class
class Colored {
protected:
    string color;
public:
    Colored(string c) : color(c) {}
};

// Rectangle
class Rectangle : public Shape {
protected:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() { return width * height; }
};

// Circle
class Circle : public Shape {
protected:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() { return PI * radius * radius; }
};

// ColoredRectangle
class ColoredRectangle : public Rectangle, public Colored {
public:
    ColoredRectangle(double w, double h, string c)
        : Rectangle(w, h), Colored(c) {}

    void display() {
        cout << "Shape: Rectangle, Color: " << color << endl;
        cout << fixed << setprecision(2);
        cout << "Width: " << width << ", Height: " << height << endl;
        cout << "Area: " << area() << endl;
    }
};

// ColoredCircle
class ColoredCircle : public Circle, public Colored {
public:
    ColoredCircle(double r, string c)
        : Circle(r), Colored(c) {}

    void display() {
        cout << "Shape: Circle, Color: " << color << endl;
        cout << fixed << setprecision(2);
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type == "rectangle") {
            double w, h; string c;
            cin >> w >> h >> c;
            ColoredRectangle cr(w, h, c);
            cr.display();
        } else { // circle
            double r; string c;
            cin >> r >> c;
            ColoredCircle cc(r, c);
            cc.display();
        }
    }

    return 0;
}
