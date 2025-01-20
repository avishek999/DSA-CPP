#include <iostream>
using namespace std;

void shortFunction(int arr[], int size) {
    int zero_count = 0;
    int one_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zero_count++;
        }
        else if (arr[i] == 1) {
            one_count++;
        }
    }

    int i = 0;

    for (; i < zero_count; i++) {
        arr[i] = 0;
    }

    for (; i < size; i++) {
        arr[i] = 1;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    shortFunction(arr, size);

    return 0;
}
