/*
Q3: Safe Array Class
- Class SafeArray with fixed size LIMIT = 20
- putel(index, value): insert value at index, print value OR "Out of Bounds"
- getel(index): return value at index
- If index < 0 or index >= LIMIT -> print "Out of Bounds"
- Input: first line = number of elements N
         then each two lines: value and index
*/

#include <iostream>
using namespace std;

const int LIMIT = 20;

class SafeArray {
    int arr[LIMIT];
public:
    SafeArray() {
        for (int i = 0; i < LIMIT; i++) arr[i] = 0;
    }

    void putel(int index, int value) {
        if (index < 0 || index >= LIMIT) {
            cout << "Out of Bounds" << endl;
        } else {
            arr[index] = value;
            cout << value << endl;
        }
    }

    int getel(int index) {
        if (index < 0 || index >= LIMIT) return -1;
        return arr[index];
    }
};

int main() {
    SafeArray sa;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val, idx;
        cin >> val >> idx;
        sa.putel(idx, val);
    }
    return 0;
}
