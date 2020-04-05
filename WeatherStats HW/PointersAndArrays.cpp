#include <iostream>

using namespace std;

double* array_shifter(double [], int);
void printArray(double[], int);
double* array_reverser(double[], int);

int main() {
    int SIZE;
    

    cout << "Please enter the size of the array: ";
    cin >> SIZE;

    double* orig = new double[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Please enter value #" << i+1 << ": ";
        cin >> orig[i];
    }
    cout << "Original Array: ";
    printArray(orig, SIZE);

    double* shifted = array_shifter(orig, SIZE);
    cout << "Shifted Array: ";
    printArray(shifted, SIZE+1);

    cout << "Reverse: ";
    double* reverse = array_reverser(orig, SIZE);
    printArray(reverse, SIZE);

    delete[] orig;
    delete[] shifted;
    delete[] reverse;
    return 0;
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
double* array_reverser(double a[], int SIZE) {
    double* b = new double[SIZE];
    int j = 0;
    for (int i = SIZE-1; i >= 0; i--) {
        *(b + (i)) = a[j];
        j++;
    }

    return b;
}
double* array_shifter(double a[], int SIZE) {
	int newSize = SIZE+1;
	double* b = new double[newSize];
    b[0] = 0;
    for (int i = 0; i < newSize; i++) {
        *(b+(i+1)) = a[i];
    }
    return b;
}