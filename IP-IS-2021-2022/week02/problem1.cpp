#include<iostream>
using namespace std;
int main(){
    int firstNum, secondNum;
    cout << "Enter two numbers: ";
    cin>>firstNum>>secondNum;
    if (firstNum > secondNum) {
        cout<<firstNum<< " is bigger" << endl;
    } else if (firstNum < secondNum) {
        cout<<secondNum<<" is bigger" << endl;
    } else {
        cout << "The numbers are equal" << endl;
    }
    return 0;
}
