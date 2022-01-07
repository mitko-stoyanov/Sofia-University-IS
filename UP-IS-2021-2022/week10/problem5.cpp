#include<iostream>
using namespace std;

void increaseNumber(int &m , int &n){
    while(m < 2 * n){
        m += 1;
        cout<<m<<" ";
    }
}

int main()
{
    int m,n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    increaseNumber(m, n);
    return 0;
}