#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number, n, result;
    cout<<"Enter the number and n: ";
    cin>>number>>n;
    result = pow(number, n);
    cout<<"The result is: "<<result;
    return 0;
}