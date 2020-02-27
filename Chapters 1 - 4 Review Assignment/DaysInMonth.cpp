#include <iostream>
using namespace std;

int main(){
    int year, month; //vars for inputs
    int leapDay = 0;
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    do{

        cout<<"Enter a month (1-12): ";
        cin>>month;
        if(month > 12) cout<<"ERROR: PLEASE ENTER A VALID MONTH"<<endl;
        
    }while(month > 12);

    cout<<"Enter a Year: ";
    cin>>year;

    if((year % 100) == 0){
        if((year%400) == 0) {
            leapDay = 1;
        }
    }else{
        if(year % 4 == 0){
            leapDay = 1;
        }
    }
    if(month == 2){
        cout<<months[month-1] + leapDay<<endl;
    }else{
        cout<<months[month]<<endl;
    }

}