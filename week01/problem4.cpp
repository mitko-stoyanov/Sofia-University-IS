#include<iostream>
using namespace std;
int main()
{
    int number, first_digit, second_digit, third_digit, sum;
    cin>>number;
    first_digit = number % 10;
    second_digit = (number / 10) % 10;
    third_digit = number / 100;
    sum = first_digit + second_digit + third_digit;
    cout<<third_digit<<endl;
    cout<<second_digit<<endl;
    cout<<first_digit<<endl;
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}