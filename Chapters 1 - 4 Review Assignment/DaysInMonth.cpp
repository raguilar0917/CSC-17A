#include <iostream>
using namespace std;

int main(){
    int year, month;
    int leapDay = 0;

    do{

        cout<<"Enter a month (1-12): ";
        cin>>month;
        if(month > 12) cout<<"ERROR: PLEASE ENTER A VALID MONTH"<<endl;
        
    }while(month > 12);

    cout<<"Enter a Year: ";
    cin>>year;

    if((year % 100) == 0){
        if((year%400) == 100) {
            leapDay = 1;
        }
    }else{
        if(year % 4 == 0){
            leapDay = 1;
        }
    }

    cout<<leapDay;

}