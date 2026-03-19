/*
Q2: Largest and Second Largest
Find the maximum sum of two DISTINCT integers in the array.
Strategy: Find largest and second largest DISTINCT values.
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        // Find the largest value
        int first = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i] > first) {
                second = first;
                first = a[i];
            } else if (a[i] != first && a[i] > second) {
                second = a[i];
            }
        }
        cout << first + second << "\n";
    }
    return 0;
}
