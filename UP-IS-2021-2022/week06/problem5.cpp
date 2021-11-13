#include<iostream>
using namespace std;
int main(){
    int number = 1, terms;
    cin>>terms;
    for(int i=0;i<terms;i++){
        for (int j = 1; j <= number; j++)
        {
            cout<<number<<" ";
        }
        number += 1;
    }
    return 0;
}