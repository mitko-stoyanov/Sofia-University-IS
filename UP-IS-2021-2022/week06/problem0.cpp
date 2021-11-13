#include<iostream>
using namespace std;
int main(){
    int number, currentDigit;
    bool hasOne = false;
    cin>>number;
    while(number != 0 && hasOne == false){
        currentDigit = number % 10;
        if(currentDigit == 1){
            hasOne = true;
        } 
        number /= 10;
    }

    if(hasOne){
        cout<<"1 is in the number!";
    } else{
        cout<<"1 is not in the number!";
    }
    return 0;
}