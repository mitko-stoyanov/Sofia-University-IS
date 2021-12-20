#include<iostream>
using namespace std;

void evenPositionsFromArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


int main()
{
    // Second Task
    return 0;
}