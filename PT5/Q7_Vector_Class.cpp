/*
Q7: Vector Class
- Class with array of coordinates
- Constructor: takes size and coordinates
- modify(): update all coordinates with new values
- multiply(): multiply all coordinates by a number
- display(): print as (10, 20, 30, ...)
Input:
  n
  n coordinates (initial)
  n coordinates (modified)
  multiplier
*/

#include <iostream>
using namespace std;

const int MAXSIZE = 105;

class Vector {
    int coords[MAXSIZE];
    int size;
public:
    Vector(int n, int arr[]) {
        size = n;
        for (int i = 0; i < size; i++) coords[i] = arr[i];
    }

    void modify(int arr[]) {
        for (int i = 0; i < size; i++) coords[i] = arr[i];
    }

    void multiply(int factor) {
        for (int i = 0; i < size; i++) coords[i] *= factor;
    }

    void display() {
        cout << "Vector: (";
        for (int i = 0; i < size; i++) {
            cout << coords[i];
            if (i != size - 1) cout << ", ";
        }
        cout << ")" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    int init[MAXSIZE], mod[MAXSIZE];
    for (int i = 0; i < n; i++) cin >> init[i];

    Vector v(n, init);
    v.display();

    for (int i = 0; i < n; i++) cin >> mod[i];
    v.modify(mod);
    v.display();

    int factor;
    cin >> factor;
    v.multiply(factor);
    v.display();

    return 0;
}
