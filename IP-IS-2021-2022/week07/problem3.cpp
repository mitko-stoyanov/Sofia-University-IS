#include<iostream>
using namespace std;

void biggerNeighbours(int arr[], int n) {
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


int main()
{
    // Third Task
    return 0;
}