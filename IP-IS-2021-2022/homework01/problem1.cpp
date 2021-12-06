#include<iostream>
#include<cmath>
using namespace std;

int findDigitsCount(int number){
    int counter = 0;
    while(number != 0){
        number /= 10;
        counter += 1;
    }

    return counter;
}

int main()
{
    int number, n = 0, numberCopy, totalSum = 0, lastDigit;
    cout<<"Enter a number: ";
    cin>>number;
    numberCopy = number;
    n = findDigitsCount(number);

    while(numberCopy != 0){
        lastDigit = numberCopy % 10;
        totalSum += pow(lastDigit, n);
        numberCopy /= 10;
    }

    if(totalSum == number){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}