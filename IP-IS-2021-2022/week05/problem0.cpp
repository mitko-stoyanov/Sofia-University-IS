#include<iostream>
using namespace std;

double findMaxNum(double a, double b){
    return a > b ? a : b;
}

int main(){
    double firstNum, secondNum;
    cin>>firstNum>>secondNum;
    cout<<findMaxNum(firstNum, secondNum);
}