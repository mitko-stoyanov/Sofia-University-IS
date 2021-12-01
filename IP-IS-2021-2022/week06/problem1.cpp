#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printCouplePrimes(int m, int n) {
    for (int i = m; i < n; ++i) {
        if (i == 1) {
            ++i;
        }
        for (int j = i + 1; j <= n; ++j) {
            if (isPrime(i) && isPrime(j) && i + 4 == j) {
                cout << i << " " << j << endl;
            }
        }
    }
}

int main() {
    printCouplePrimes(1, 20);
    return 0;
}