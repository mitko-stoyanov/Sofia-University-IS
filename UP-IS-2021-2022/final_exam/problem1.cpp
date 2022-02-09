#include<iostream>
#include<cmath>
using namespace std;

int findDigitsSum(int number){
    int sum = 0, lastDigit;
    while(number != 0){
        lastDigit = number % 10;
        sum += lastDigit;
        number /= 10;
    }
    return sum;
}

int numberPow(int number, int n){
    int result = 1;
    while(n != 0){
        result *= number;
        n--;
    }
    return result;
} 

bool isNumberRed(int number){
    for(int i=0; i<1000; i++){
        if(i * findDigitsSum(number) == number){
            return true;
        }
    }
    return false;
}

bool isNumberGreen(int number){
    int lastDigit, result = 0, numberCopy = number;
    while(numberCopy != 0){
        lastDigit = numberPow(numberCopy % 10, 3);
        result += lastDigit;
        numberCopy /= 10;
    }
    return number == result;
}

void isGreenOrRed(int firstNum, int secondNum){
    bool isFound = false;
    for(int i=firstNum; i<=secondNum; i++){
        if(isNumberGreen(i) || isNumberRed(i)){
            isFound = true;
            break;
        } else if(isNumberGreen(i) && isNumberRed(i)){
            isFound = true;
            break;
        }
    }
    if(isFound){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int firstNum, secondNum;
    cout<<"Enter first and second number: ";
    cin>>firstNum>>secondNum;
    isGreenOrRed(firstNum, secondNum);
    return 0;
}