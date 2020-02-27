#include <iostream>
using namespace std;

int main(){
    int year, month; //vars for inputs
    int leapDay = 0;

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
    cout<<leapDay<<endl;
    
    switch(month){
        case 1:
            cout<<31;
            break;
        case 2:
            cout<<28+leapDay;
            break;
        case 3:
            cout<<31;
            break;
        case 4:
            cout<<30;
            break;
        case 5:
            cout<<31;
            break;
        case 6:
            cout<<30;
            break;
        case 7:
            cout<<31;
            break;
        case 8:
            cout<<31;
            break;
        case 9:
            cout<<30;
            break;
        case 10:
            cout<<31;
            break;
        case 11:
            cout<<30;
            break;
        case 12:
            cout<<31;
            break;

        default:
            break;
    }

}