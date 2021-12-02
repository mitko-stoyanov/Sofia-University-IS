#include<iostream>
using namespace std;
bool isValid(int i){
    if((i == 1) ||  (i == 4) || (i == 6) ||  (i == 8) || (i == 12) || (i == 20)){
        return true;
    } else{
        return false;
    }
}

int main(){
    int firstNum, secondNum, finalNum, numberCopy;
    cout<<"Enter two numbers: ";
    cin>>firstNum>>secondNum;
    finalNum = firstNum * 10 + secondNum;
    numberCopy = finalNum;
    // 1, 4, 6, 8, 12, 20
    for(int i=20; i>=0; i--){
        if(isValid(i) && finalNum >= i){
            finalNum -= i;
            switch(i){
                case 1: cout<<"Plasma"; break;
                case 4: cout<<"Fyre"; break;
                case 6: cout<<"Earth"; break;
                case 8: cout<<"Air"; break;
                case 12: cout<<"Universe"; break;
                case 20: cout<<"Water"; break;
            }

            if(finalNum == 0){
            break;
            }
        }
    }
    return 0;
}