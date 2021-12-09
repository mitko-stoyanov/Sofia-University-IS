#include<iostream>
using namespace std;

int generateNewNum(int number, int multiplier, int newNum, int lastDigit){
    // При този метод числото накрая излиза обърнато(не 48322, а 22483), за това правя функция, която го обръща.
    while(number != 0){
        lastDigit = number % 10;
        lastDigit *= multiplier;
        if(lastDigit  > 9){
            lastDigit /= 10;
        }
        newNum = (newNum * 10) + lastDigit;
        number /= 10;
    }
    return newNum;
}

int reverseNum(int number, int reversedNum, int lastDigit){
    do{
        lastDigit = number % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        number /= 10;
    } while(number != 0);
    return reversedNum;
}

bool hasOneDigit(int number){
    int counter = 0;
    while(number != 0){
        number /= 10;
        counter += 1;
    }

    if(counter == 1){
        return true;
    }
    return false;
}

int main(){
    int number, multiplier, newNum = 0, lastDigit = 0, notReversedNum;
    cout<<"Enter the number and multiplier: ";
    cin>>number>>multiplier;
    if(hasOneDigit(multiplier)){
        notReversedNum = generateNewNum(number, multiplier, newNum, lastDigit);
        int finalNum = reverseNum(notReversedNum, newNum, lastDigit);
        cout<<"f("<<number<<","<<multiplier<<") -> "<<finalNum;
    }
    return 0;
}