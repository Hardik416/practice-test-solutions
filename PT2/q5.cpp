#include <iostream>
using namespace std;

int findKthSmallest(int arr[], int size, int k) {
    int minValue = INT_MAX; // Declare minValue outside the loop
    for (int i = 0; i < k; i++) { // Run k times
        int minIndex = -1;
        minValue = INT_MAX; // Initialize minValue at the start of each iteration

        // Find the smallest unused element
        for (int j = 0; j < size; j++) {
            if (arr[j] < minValue) {
                minValue = arr[j];
                minIndex = j;
            }
        }

        // Mark the selected element as "used"
        arr[minIndex] = INT_MAX; // Replace it with a large number
    }

    return minValue; // k-th smallest element
}

int main() {
    int size, k;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter k: ";
    cin >> k;

    cout << "K-th Smallest Element: " << findKthSmallest(arr, size, k) << endl;

    return 0;
}