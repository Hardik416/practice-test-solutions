/*
Q1: Running Comparison
- Alice is unhappy if Bob ran strictly more than twice her distance (B > 2*A)
- Bob is unhappy if Alice ran strictly more than twice his distance (A > 2*B)
- Count days when BOTH are happy
- Both happy means: B <= 2*A AND A <= 2*B
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int count = 0;
        for (int i = 0; i < n; i++) {
            // Alice happy: Bob did NOT run strictly more than twice Alice
            // Bob happy: Alice did NOT run strictly more than twice Bob
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i]) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
