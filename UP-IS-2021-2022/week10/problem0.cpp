#include<iostream>
using namespace std;

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 16;
    int b = 9;
    swapNumbers(a, b);
    cout<<"FirstNum: "<<a<<endl;
    cout<<"SecondNum: "<<b<<endl;
    return 0;
}