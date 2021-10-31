#include <iostream>
using namespace std;
int main() {
    int n, firstNum = 0, secondNum = 1, nextNumber = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n + 2; i++) {
        if(i == 1) {
            cout << firstNum << ", ";
            continue;
        }
        if(i == 2) {
            cout << secondNum << ", ";
            continue;
        }
        nextNumber= firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNumber;
        
        cout << nextNumber << ", ";
    }
    cout<<"\nThe last number is: "<<secondNum;
    return 0;
}