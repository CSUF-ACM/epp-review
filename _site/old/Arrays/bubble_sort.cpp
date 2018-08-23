#include <iostream>
using namespace std;

void BubbleSort(int *, const int);

int main() {
    const int kSize = 5;
    int arr[kSize] = { 6, 8, 3, 7, 1 };

    BubbleSort(arr, kSize);

    for (int i = 0; i < kSize; i++) {
        cout << arr[i] << " ";
    }

}

void BubbleSort(int *arr, const int kSize) {

    for (int i = kSize; i > 0; i--) {       // Loop a total of kSize times.
        for (int j = 0; j < i - 1; j++) {   // Loop through the array.
            if (arr[j] > arr[j + 1]) {      // If previous number is greater than next number
                int temp = arr[j + 1];      // then swap.
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

}
