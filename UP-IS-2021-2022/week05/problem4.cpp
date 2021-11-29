#include <iostream>
using namespace std;

int minNumber(int firstNum, int secondNum, int thirdNum){
    if(firstNum < secondNum && firstNum < thirdNum){
        return firstNum;
    } else if(secondNum < firstNum && secondNum < thirdNum){
        return secondNum;
    } else if(thirdNum < firstNum && thirdNum < secondNum){
        return thirdNum;
    }
}

int main() {
    int firstNum, secondNum, thirdNum, minNum;
    cout<<"Enter three numbers: ";
    cin>>firstNum>>secondNum>>thirdNum;
    minNum = minNumber(firstNum, secondNum, thirdNum);
    cout<<"The min number is: "<<minNum;
    return 0;
}