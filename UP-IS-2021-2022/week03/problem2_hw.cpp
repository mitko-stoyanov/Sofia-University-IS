#include <iostream>
using namespace std;
int main()
{
    int firstNum, secondNum, thirdNum, maxNum;
    cout<<"Enter three numbers: ";
    cin>>firstNum>>secondNum>>thirdNum;
    maxNum = firstNum;
    if(secondNum > maxNum){
        maxNum = secondNum;
    }
    if(thirdNum > maxNum){
        maxNum = thirdNum;
    }
    cout<<"The max number is: "<<maxNum<<endl;
    return 0;
}
