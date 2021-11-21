#include <iostream>
#include <cmath>
using namespace std;
bool isPowerN(int a, int b = 2) {
    while (a > 1) {
        a /= b;
    }

    return a == 1;
}

int main() {
    cout<<isPowerN(32, 2)<<endl;
    return 0;
}