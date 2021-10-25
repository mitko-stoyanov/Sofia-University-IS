#include <iostream>
using namespace std;
int main()
{
    int number, firstDigit, secondDigit, thirdDigit, fourthDigit;
    cout<<"Enter a number: ";
    cin>>number;
    firstDigit = number % 10;
    secondDigit = (number / 10) % 10;
    thirdDigit = (number / 100) % 10;
    fourthDigit = number / 1000;
    bool hasUniqueDigits = (firstDigit != secondDigit) &&
                           (secondDigit != thirdDigit) &&
                           (thirdDigit != fourthDigit) &&
                           (firstDigit != fourthDigit) && 
                           (firstDigit != thirdDigit) &&
                           (secondDigit != fourthDigit);

    if(hasUniqueDigits){
        cout<<"The digits are different."<<endl;
    }
    else{
        cout<<"The digits are not different."<<endl;
    }
    return 0;
}
