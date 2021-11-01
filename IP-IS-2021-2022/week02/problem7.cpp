#include<iostream>
using namespace std;
int main(){
    int n, m, k;
    cout << "Enter two numbers: ";
    cin>>n>>k;
    cout << "Enter number of blocks that you want to cut: ";
    cin >> k;
    if (k > n * m) {
        cout << "You want too much blocks from this chocolate" << endl;
    } else {
        if (n % k != 0 || m % k != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}