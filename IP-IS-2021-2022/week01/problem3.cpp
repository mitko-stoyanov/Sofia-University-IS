#include<iostream>
using namespace std;
int main()
{
    int firstNum, secondNum, temp;
    cout<<"Enter first number: ";
    cin>>firstNum;
    cout<<"Enter second number: ";
    cin>>secondNum;
    temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;
    cout<<"First number: "<<firstNum<<endl;
    cout<<"Second number: "<<secondNum<<endl;
    return 0;
}