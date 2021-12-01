#include <iostream>
using namespace std;

int printNFibonachi(int n) {
    int first = 0, second = 1, third = 1;
    if (n == 1 || n == 2) {
        return 1;
    }
    for (int i = 2; i < n; ++i) {
        third = first + second;
        first = second;
        second = third;
    }

    return third;
}

int main() {
    cout << printNFibonachi(5) << endl;
    return 0;
}