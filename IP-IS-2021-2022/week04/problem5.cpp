#include<iostream>
using namespace std;
int main(){
    cout << "Task 5\n";
    int counter = 0;
    for (int i = 100; i < 1000; ++i) {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        int pow = firstDigit;
        pow = secondDigit != 0 ? pow * secondDigit : pow;
        pow = thirdDigit != 0 ? pow * thirdDigit : pow;
        if (i % pow == 0) {
            cout << i << " ";
            ++counter;
            if (counter % 10 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl;
    

    return 0;
}