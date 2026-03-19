#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int* arr = new int[n];
        int index = 0;  // Position for non-zero elements

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            if (arr[j] != 0) {
                arr[index++] = arr[j];  // Move non-zero elements forward
            }
        }

        // Fill remaining positions with zeros
        while (index < n) {
            arr[index++] = 0;
        }

        // Output result
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << "\n";

        delete[] arr; // Free allocated memory
    }
}