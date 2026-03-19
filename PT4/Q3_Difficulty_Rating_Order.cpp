/*
Q3: Difficulty Rating Order
Check if array is in non-decreasing order.
Non-decreasing: each element >= previous element.
Output "Yes" if non-decreasing, "No" otherwise.
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[105];
        for (int i = 0; i < n; i++) cin >> a[i];

        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}
