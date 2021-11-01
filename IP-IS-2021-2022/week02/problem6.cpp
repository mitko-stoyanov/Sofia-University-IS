#include<iostream>
using namespace std;
int main(){
    int monthNum;
    cout<<"Enter a number: ";
    cin>>monthNum;
    if(monthNum < 1 || monthNum > 12){
        cout<<"Invalid number!";
    } else{
        if(monthNum == 1){
            cout<<"January";
        } else if(monthNum == 2){
            cout<<"February";
        } else if(monthNum == 3){
            cout<<"March";
        } else if(monthNum == 4){
            cout<<"April";
        } else if(monthNum == 5){
            cout<<"May";
        } else if(monthNum == 6){
            cout<<"June";
        } else if(monthNum == 7){
            cout<<"July";
        } else if(monthNum == 8){
            cout<<"August";
        } else if(monthNum == 9){
            cout<<"September";
        } else if(monthNum == 10){
            cout<<"October";
        } else if(monthNum == 11){
            cout<<"November";
        } else{
            cout<<"December";
        }
    }
    return 0;
}