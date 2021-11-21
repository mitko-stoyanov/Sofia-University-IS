#include <iostream>
#include <cmath>
using namespace std;
//TASK 3
bool isPower2(int n) {
    while (n > 1) {
        n /= 2;
    }

    return n == 1;
}

int main() {
    cout << isPower2(3);
    return 0;
}