#include <iostream>
using namespace std;

void fillArray(double [], int);
void printArray(double[], int);
void copyArray(double[], double[], int);
void swap(double *, double *);
void bubbleSort(double[], int);
void selectionSort(double[], int);

int main() {
	double firstArr[15];
	double secondArr[15];
	
	fillArray(firstArr, 15);
	copyArray(firstArr, secondArr,  15);

	cout << "== First Array == " << endl;
	bubbleSort(firstArr, 15);
	printArray(firstArr, 15);
	cout << "== Second Array == " << endl;
	selectionSort(secondArr, 15);
	printArray(secondArr, 15);



}
void copyArray(double arr[], double copyArr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		copyArr[i] = arr[i];
	}
}
void swap(double *var1, double *var2) {
	double temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

void bubbleSort(double arr[], int SIZE) {
	for (int i = 0; i < SIZE - 1; i++) {
		cout << "Pass #" << i << ": ";
		printArray(arr, SIZE);
		for (int j = 0; j < SIZE - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void selectionSort(double arr[], int SIZE) {
	int min;

	
	for (int i = 0; i < SIZE - 1; i++) {

		cout << "Pass #" << i << ": ";
		printArray(arr, SIZE);
		min = i;
		for (int j = i + 1; j < SIZE; j++) {
			
			//
			if (arr[j] > arr[min]) {
				min = j;
			}
			
		}
		
		swap(arr[min], arr[i]);
	}
}

void printArray(double arr[], int SIZE) {
	cout << "{";
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i];
		if (i < SIZE - 1) {
			cout << ", ";
		}
	}
	cout << "}" << endl;

}
void fillArray(double arr[], int SIZE) {
	cout << "Please enter 15 numbers." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Please enter value #" << i + 1 << ": ";
		cin >> arr[i];
	}
}