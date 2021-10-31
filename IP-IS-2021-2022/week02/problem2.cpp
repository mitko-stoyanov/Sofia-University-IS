#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(1 <= number && number <= 12){
        cout<<"The number is valid!";
    } else{
        cout<<"The number is not valid!";
    }
    return 0;
}