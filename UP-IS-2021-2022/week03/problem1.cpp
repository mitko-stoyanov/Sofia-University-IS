#include <iostream>
using namespace std;
int main()
{
    char operation;
    double firstNum, secondNum, result;

    cout<<"Enter operator: ";
    cin>>operation;
    cout<<"Enter two numbers: ";
    cin>>firstNum>>secondNum;

    if(operation == '+')
    {
        result = firstNum + secondNum;
    }
    else if(operation == '-'){
        result = firstNum - secondNum;
    }
    else if(operation == '*'){
        result = firstNum * secondNum;
    }
    else if(operation == '/'){
        result = firstNum / secondNum;
    }

    cout<<"The result: "<<result<<endl;
    return 0;
}