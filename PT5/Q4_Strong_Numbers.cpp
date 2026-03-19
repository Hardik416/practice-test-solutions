/*
Q4: Strong Numbers
- A strong number: sum of factorials of its digits == the number itself
- Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
- Find all strong numbers between a and b (inclusive)
- Output: "The Strong numbers in the given range are: " followed by numbers
- If none: print "The Strong numbers in the given range are: No strong numbers found"
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

bool isStrong(int n) {
    int temp = n, sum = 0;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "The Strong numbers in the given range are: ";
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (isStrong(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "No strong numbers found";
    cout << endl;

    return 0;
}
