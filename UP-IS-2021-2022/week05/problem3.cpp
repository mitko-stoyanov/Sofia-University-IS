#include <iostream>
using namespace std;

bool isPrime(int number){
    for(int i=2; i<number/2; i++){
        if(number % 2 == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int firstNum, secondNum;
    cout<<"Enter two numbers: ";
    cin>>firstNum>>secondNum;
    bool bothPrime = isPrime(firstNum) && isPrime(secondNum);

    if(bothPrime && firstNum + 2 == secondNum){
        cout<<"True";
    } else{
        cout<<"False";
    }
}