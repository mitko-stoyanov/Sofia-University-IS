#include <iostream>
using namespace std;

void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void reversePrintArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;
    
    int arr[n];
    fillArray(arr, n);
    printArray(arr, n);
    reversePrintArray(arr, n);

    return 0;
}
