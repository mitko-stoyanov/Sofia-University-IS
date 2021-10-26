#include <iostream>
using namespace std;
int main()
{
    int number, firstDigit, secondDigit, thirdDigit, digitsSum;
    cout<<"Enter a positive 3-digit number: ";
    cin>>number;
    firstDigit = number % 10;
    secondDigit = (number / 10) % 10;
    thirdDigit = number / 100;
    digitsSum = firstDigit + secondDigit + thirdDigit;
    cout<<"The sum is: "<<digitsSum<<endl;
    return 0;
}
