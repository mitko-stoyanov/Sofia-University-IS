#include <iostream>

using namespace std;

void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

bool isInteresting(int number) {
    while (number != 0) {
        if ((number % 10) < (number / 10) % 10) {
            return false;
        }

        number /= 10;
    }

    return true;
}

void interestingNumbers() {
    int size;
    cin >> size;

    int numbers[size]; 

    fillArray(numbers, size);

    for (int i = 0; i < size; i++) {
        int number = numbers[i];

        if (isInteresting(number)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    interestingNumbers();
}