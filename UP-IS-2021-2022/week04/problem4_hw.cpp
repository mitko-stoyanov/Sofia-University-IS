#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    string currentState = "1";
    for(int i = 1; i <= num; i++){
        if(i == num){
            cout<<currentState;
        } else{
            cout<<currentState<<" + ";
            currentState += "1";
        }
    }
    return 0;
}