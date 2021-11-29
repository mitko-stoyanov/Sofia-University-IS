#include <iostream>
using namespace std;

int maxNumber(int firstNum, int secondNum){
    int maxNum;
    if(firstNum > secondNum){
        return firstNum;
    } else if(secondNum > firstNum){
        return secondNum;
    } 
}

int main() {
    int firstNum, secondNum, maxNum;
    cout<<"Enter two numbers: ";
    cin>>firstNum>>secondNum;
    maxNum = maxNumber(firstNum, secondNum);
    cout<<"The max number is: "<<maxNum;

    return 0;
}