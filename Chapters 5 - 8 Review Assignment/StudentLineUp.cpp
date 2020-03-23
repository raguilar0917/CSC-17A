#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string [], int);
void Swap(char, char);
void printList(string [], int size);

int main(){
    int classSize;

    do{
        cout<<"Please enter class Size: ";
        cin>>classSize;
        if(classSize > 25 || classSize < 1) cout<<"ERROR: ENTER CLASS SIZE THAT IS BETWEEN 1-25"<<endl;
    }while(classSize > 25 || classSize < 1);

    string classList[classSize];
    string sortList[classSize];

    for(int i = 0; i < classSize; i++){
        cout<<"Please enter student #"<<i+1<<": ";
        cin>>classList[i];
    }
    bubbleSort(classList, classSize);
    printList(classList, classSize);
}

void printList(string arr[], int SIZE){
    for(int i = 0; i < SIZE; i++){
        cout<<arr[i][0]<<", ";
    }

}


void swap(char val1, char val2){
    int temp = val1;
    val1 = val2;
    val2 = temp;
}
void bubbleSort(string arr[], int SIZE){
    for(int i = 0; i < SIZE-1; i++){

        for(int j = 0; j < SIZE ; j++){

            if(arr[j][0] > arr[j+1][0]){
                swap(arr[j], arr[j+1]);

            }

        }
    }
}