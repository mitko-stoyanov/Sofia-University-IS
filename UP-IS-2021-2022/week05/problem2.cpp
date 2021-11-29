#include <iostream>
using namespace std;

int digitsInNum(int number, int digit){
    int lastDigit, counter = 0;
    while(number != 0){
        lastDigit = number % 10;
        if(lastDigit == digit){
            counter += 1;
        }
        number /= 10;
    }
    return counter;
}

int main() {
   int number, digit;
   cout<<"Enter a number and digit: ";
   cin>>number>>digit;
   cout<<"The digit "<<digit<<" is in number "<<digitsInNum(number, digit)<<" times.";
   return 0;
}