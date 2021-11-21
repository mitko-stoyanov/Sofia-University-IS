#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

bool isPalindrome1(int n) {
    int nCopy = n;
    int size = 0;
    while (nCopy != 0) {
        nCopy /= 10;
        ++size;
    }
    for (int i = 0; i < size; ++i) {
        int first = (n / (int)pow(10, size - i - 1)) % 10;
        int second = (n % (int)pow(10, i + 1) / (int)pow(10, i));
        if (first != second) {
            return false;
        }
    }

    return true;
}

bool isPalindrome2(int n) {
    int nCopy = n;
    int nReverse = 0;
    while (nCopy > 0) {
        nReverse = nReverse * 10 + nCopy % 10;
        nCopy /= 10;
    }

    return n == nReverse;
}

void printPrimePalindromes(int n) {
    for (int i = 1, counter = 0; counter < n; ++i) {
        bool isTrue = isPalindrome1(i) && isPrime(i);
        if (isTrue) {
            cout << i << " ";
            ++counter;
        }
    }
    cout << endl;
}


int main() {
    printPrimePalindromes(10);
    return 0;
}