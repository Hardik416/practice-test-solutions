#include <iostream> 
#include <string>
using namespace std;

class Rectangle{
    private:
    int x, y, width , height;
    public:
    Rectangle(int a, int b, int c, int d) : x(a), y(b), width(c), height(d){}
    int getheight(){
        return height;
    }
    int getwidth(){
        return width;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    string toString(){
        string s = "Recatangle[x=" + to_string(x) + ",y=" + to_string(y) + ",width=" + to_string(width) + ",height=" + to_string(height) + "]";
        return s;
    }
};
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Rectangle obj(a,b,c,d);
    cout << obj.getx() << "\n";
    cout << obj.gety() << "\n"; 
    cout << obj.getwidth() << "\n";
    cout <<obj.getheight() << "\n";
    cout << obj.toString() << "\n";
}