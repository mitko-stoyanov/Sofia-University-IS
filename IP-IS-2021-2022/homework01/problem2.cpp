#include<iostream>
using namespace std;

bool isPalindrome(int number){
    int digit, reversedNum = 0, numberCopy = number;
    do{
        digit = numberCopy % 10;
        reversedNum = (reversedNum * 10) + digit;
        numberCopy /= 10;
    } while (numberCopy != 0);
    
    if(number == reversedNum){
        return true;
    }
    return false;

}

int main()
{
    int n, numberCounter = 0;
    unsigned long maxNum = 4294967295;
    bool firstNumCorrect, secondNumCorrect;
    cout<<"Enter how many numbers do you want to see: ";
    cin>>n;

    for(int i=11; i<maxNum; i++){
       if(numberCounter == n){
           break;
       }
       firstNumCorrect = isPalindrome(i);
       secondNumCorrect = isPalindrome(i * i);
       if(firstNumCorrect && secondNumCorrect){
           cout<<i<<" -> "<<i * i<<endl;
           numberCounter += 1;
       }
    }
    return 0;
}