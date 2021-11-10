#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number to calculate factorial: ";
    cin >> num;
    int pow = 1;
    for (int i = 1; i <= num; ++i) {
        pow *= i;
    }
    cout << "The facorial: " << pow << endl;
    return 0;
}