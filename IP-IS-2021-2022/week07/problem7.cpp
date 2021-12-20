#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    for(int i = 0, j = n - 1; i < n / 2; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    // Seventh Task
    return 0;
}