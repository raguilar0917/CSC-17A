#include <iostream>
#include <string.h>

using namespace std;
void printClass(string[], int);
void getClass(string[], int);
void swap(int, int);
void bubbleSort(string[], int);

int main() {
    //this will hold the size of the class
    int SIZE;

    /*
    the DO-WHILE will first ask how many student in the class if the size is
    larger than 25 or less than 1 it will print an error and ask until paramters met
    */
    do {
        cout << "Please enter the number of students: ";
        cin >> SIZE;
        if (SIZE > 25 || SIZE < 1) cout << "ERROR: INVALID ENTRY" << endl;
    } while (SIZE > 25 || SIZE < 1);

    //Create a dynamic array with the size inputted
    string* classList = new string[SIZE];
    getClass(classList, SIZE);
    cout << "unsorted: ";
    printClass(classList, SIZE);
    bubbleSort(classList, SIZE);
    cout << "sorted: ";
    printClass(classList, SIZE);

    delete[] classList;
    return 0;
}
void getClass(string arr[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Please enter student #" << i + 1 << ": ";
        cin >> arr[i];
    }
}
void printClass(string arr[], int SIZE) {
    cout << "{";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

}
void swap(int val1, int val2) {
    int temp = val1;
    val1 = val2;
    val2 = temp;
}
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}