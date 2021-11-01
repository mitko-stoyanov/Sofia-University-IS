#include<iostream>
using namespace std;
int main(){
    // 0 is positive 
    double firstNum, secondNum;
    cout<<"Enter two numbers: ";
    cin>>firstNum>>secondNum;
    if(firstNum >= 0 && secondNum >= 0){
        cout<<"Both of them are positive!";
    } else if(firstNum >= 0 && secondNum < 0){
        cout<<"Only the first number is positive!";
    } else if(firstNum < 0 && secondNum >= 0){
        cout<<"Only the second number is positive!";
    } else{
        cout<<"Both of them are negative!";
    }
    return 0;
}