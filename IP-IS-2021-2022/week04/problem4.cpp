#include<iostream>
using namespace std;
int main(){
    int counter = 0;
    for (int i = 100; i < 1000; ++i) {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit) {
            cout << i << " ";
            ++counter;
            if (counter % 20 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}