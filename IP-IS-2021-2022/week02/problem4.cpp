#include<iostream>
using namespace std;
int main(){
    char symbol;
    cout<<"Enter one symbol: ";
    cin>>symbol;
    if('A' <= symbol && 'z' >= symbol){
        cout<<"It is a letter!";
    } else{
        cout<<"It is not a letter!";
    }
    return 0;
}