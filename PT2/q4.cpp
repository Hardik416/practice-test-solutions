#include <iostream>

using namespace std;

void removeDuplicates(int arr[], int& size) {
    int newSize = 0; // Tracks the new array size

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // Check if arr[i] appears earlier in the array
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If it's not a duplicate, add it to the new unique array
        if (!isDuplicate) {
            arr[newSize++] = arr[i];
        }
    }

    size = newSize; // Update the array size
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size]; // Declaring a fixed-size array
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    removeDuplicates(arr, size);

    cout << "Array without duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}