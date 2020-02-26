#include <iostream>
using namespace std;
int main(){
    float sugar = 1.5/48.0;
    float butter = 1.0/48.0;
    float flour = 2.75/48.0;
    int amount;

    cout<<"How many cookies would you like to make?: ";
    cin>>amount;
    
    cout<<"Recipe for "<<amount<<" cookie(s)"<<endl;
    cout<<"You need " << sugar*amount <<" cup(s) of sugar"<<endl;
    cout<<"You need " << butter*amount <<" cup(s) of butter"<<endl;
    cout<<"You need " << flour*amount <<" cup(s) of flour"<<endl;
}