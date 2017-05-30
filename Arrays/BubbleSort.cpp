#include <iostream>
using namespace std;

void bubbleSort(int *, const int);

int main() {
	const int SIZE = 5;
	int arr[SIZE] = { 6, 8, 3, 7, 1 };

	bubbleSort(arr, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}

}

void bubbleSort(int *arr, const int SIZE) {

	for (int i = SIZE; i > 0; i--) {		//loop a total of SIZE times
		for (int j = 0; j < i - 1; j++) {		//loop through the array
			if (arr[j] > arr[j + 1]) {				//if previous number is greater than next number
				int temp = arr[j + 1];					//swap
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

}