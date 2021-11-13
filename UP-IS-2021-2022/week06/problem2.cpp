#include<iostream>
using namespace std;
int main(){
    int firstNum, secondNum;
    cin>>firstNum>>secondNum;
    bool hasFound = false;
    for(int i=2; i < firstNum; i++){
        if(firstNum % i == 0){
            if(secondNum % (i * i) == 0){
                hasFound = true;
                break;
            }
        }
    }
    if(hasFound){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}