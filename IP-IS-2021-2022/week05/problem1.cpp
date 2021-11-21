#include<iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimeNumbers() {
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    printPrimeNumbers();
    return 0;
}