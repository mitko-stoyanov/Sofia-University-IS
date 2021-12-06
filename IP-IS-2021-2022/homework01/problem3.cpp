#include<iostream>
using namespace std;

bool isPrime(int number){
    for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
    return true;
}

int main(){
    int numbersCount, primeFactor = 5, counter = 0;
    char userChoice;
    cout<<"Enter the numbers count that you want to see: ";
    cin>>numbersCount;
    cout<<"Do you want to add a prime factor? ('y' for yes / 'n' for no) ";
    cin>>userChoice;
    if(userChoice == 'y'){
        cout<<"Enter a prime factor: ";
        cin>>primeFactor;
    }
    
    if(isPrime(primeFactor)){
        unsigned long maxNum = 4294967295; 
        for(int i=2;i<maxNum && counter < numbersCount; i++){
            bool isNumValid = true;
            for (int j = 1; j <= i; j++){
                if(isPrime(j) && i % j == 0 && j > primeFactor){
                    isNumValid = false;
                    break;
                } 
            }

            if(isNumValid){
                cout<<i<<" ";
                counter += 1;
            }
        }   
    } else{
        cout<<"Prime Factor is not prime number!";
    }
    return 0;
}