#include<iostream>
using namespace std;
int main()
{
    int number;
    do {
        cout << "Enter two-digit number: ";
        cin >> number;
    } while(number < 10 || number > 99);
    cout << endl;
    return 0;
}