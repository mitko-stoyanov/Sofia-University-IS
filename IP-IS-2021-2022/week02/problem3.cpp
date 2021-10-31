#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers(range): ";
    cin>>a>>b;
    int number;
    cout<<"Enter only one number: ";
    cin>>number;
    if(a < number && number < b){
        cout<<"The number is in the range!";
    } else{
        cout<<"The number is not in the range!";
    }
    return 0;
}