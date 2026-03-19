#include <iostream>
using namespace std;

class Complex{
    private:
    int real = 0, imag = 0;
    public:
    Complex(){}
    Complex(int x, int y) : real(x), imag(y){}
    Complex operator+(Complex c){
        Complex sumobj;
        sumobj.real = real + c.real;
        sumobj.imag = imag + c.imag;
        return sumobj;
    }
    Complex operator-(Complex c){
        Complex subobj;
        subobj.real = real - c.real;
        subobj.imag = imag - c.imag;
        return subobj;
    }
    void display(){
        cout << real << "+" << imag << "i\n";
    }
};
int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    Complex c1(x, y), c2(a, b), c3, c4;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c3.display();
    c4.display();
}