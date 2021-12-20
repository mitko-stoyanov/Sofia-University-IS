#include<iostream>
using namespace std;

int length(char arr[]) {
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        ++counter;
    }

    cout << "Length = " << counter << endl;
    return counter;
}

int main()
{
    // Fourth Task
    return 0;
}