#include<iostream>
using namespace std;
int main()
{
    int number, firstDigit, secondDigit, thirdDigit, sum;
    cin>>number;
    firstDigit = number % 10;
    secondDigit = (number / 10) % 10;
    thirdDigit = number / 100;
    sum = firstDigit + secondDigit + thirdDigit;
    cout<<thirdDigit<<endl;
    cout<<secondDigit<<endl;
    cout<<firstDigit<<endl;
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
