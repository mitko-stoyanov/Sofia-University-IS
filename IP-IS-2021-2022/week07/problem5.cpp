#include<iostream>
using namespace std;

bool isPalindrome(char arr[]) {
    int size = length(arr);
    for (int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        if (arr[i] != arr[j]) {
            cout << "NO" << endl;
            return false;
        }
    }
    cout << "YES" << endl;
    return true;
}

int main()
{
    // Fifth Task
    return 0;
}