/*
Q2: Decimal to Binary
- Given a decimal number, print its binary equivalent
- No STL, manual conversion using division by 2
*/

#include <iostream>
using namespace std;

void decToBin(int n) {
    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    int bits[64];
    int idx = 0;
    while (n > 0) {
        bits[idx++] = n % 2;
        n /= 2;
    }
    // print in reverse
    for (int i = idx - 1; i >= 0; i--) {
        cout << bits[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    decToBin(n);
    return 0;
}
