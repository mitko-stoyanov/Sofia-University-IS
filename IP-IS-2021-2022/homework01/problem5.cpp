#include<iostream>
using namespace std;
int main(){
    unsigned long number;
    cout<<"Enter a number: ";
    cin>>number;
    int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0,
        counter5 = 0, counter6 = 0, counter7 = 0, counter8 = 0,
        counter9 = 0, counter0 = 0;

    while(number != 0){
        int lastDigit = number % 10;
        number /= 10;
        switch(lastDigit){
            case 1: counter1 += 1; break;
            case 2: counter2 += 1; break;
            case 3: counter3 += 1; break;
            case 4: counter4 += 1; break;
            case 5: counter5 += 1; break;
            case 6: counter6 += 1; break;
            case 7: counter7 += 1; break;
            case 8: counter8 += 1; break;
            case 9: counter9 += 1; break;
            case 0: counter0 += 1; break;
        }
    }

    bool isUnique = counter1 <= 1 && counter2 <= 1 && counter3 <= 1 &&
                    counter4 <= 1 && counter5 <= 1 && counter6 <= 1 &&
                    counter7 <= 1 && counter8 <= 1 && counter9 <= 1 &&
                    counter0 <= 1;

    if(isUnique){
           cout<<"All digits are unique.";
       } else{
           cout<<"Not all digits are unique.";
       }
    return 0;
}