#include<iostream>
using namespace std;
int main()
{
    int firstNum, secondNum, k;
    bool isCorrect = true;
    cout<<"Enter two numbers: ";
    cin>>firstNum>>secondNum>>k;

    for(int i = firstNum; i <= secondNum; i++){
        int counter = 0;
        for(int j=1; j<=i; j++){
            if(i % j == 0){
                counter += 1;
            }
        }
        if(counter < k){
            isCorrect = false;
            break;
        }
    }
    if(isCorrect){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}