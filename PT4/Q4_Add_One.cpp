/*
Q4: Add One
N is a very large number (up to 10^200000), given as a string.
Add 1 to it using carry logic from right to left.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int carry = 1;
        // Add 1 from the rightmost digit
        for (int i = n - 1; i >= 0 && carry; i--) {
            int digit = (s[i] - '0') + carry;
            s[i] = (digit % 10) + '0';
            carry = digit / 10;
        }
        // If carry still remains, prepend '1'
        if (carry) {
            s = "1" + s;
        }
        cout << s << "\n";
    }
    return 0;
}
