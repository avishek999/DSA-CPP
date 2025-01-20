#include <iostream>
using namespace std;

void shortFunction(int arr[], int size) {
    int zero_count = 0; // Counter for zeros
    int one_count = 0;  // Counter for ones

    // Counting zeros and ones
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zero_count++;
        }
        else if (arr[i] == 1) {
            one_count++;
        }
    }

    int i = 0;

    // Filling the array with zeros
    for (; i < zero_count; i++) {
        arr[i] = 0;
    }

    // Filling the array with ones
    for (; i < size; i++) {
        arr[i] = 1;
    }

    // Printing the array after sorting
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    shortFunction(arr, size);  // Call the shortFunction

    return 0;
}
