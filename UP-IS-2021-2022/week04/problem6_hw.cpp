#include<iostream>
using namespace std;
int main(){
    int n;
    string currentState = "", negativeState = "";
    cin>>n;
    for(int i = 0; i < n; i ++){
        currentState = "";
        if(i != 0){
            negativeState += "-";
        }
        for(int j = n; j > i; j--){
            currentState += '+';
        }
        currentState = negativeState + currentState;
        cout<<currentState<<endl;
    }
    return 0;
}