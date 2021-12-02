#include<iostream>
using namespace std;
int main(){
    // 13.11.2021
    int number, day, month, year, correctMaxDay, correctMinDay = 1, correctMonth;
    cout<<"Enter a number: ";
    cin>>number;
    day = number / 1000000;
    month = number / 10000 % 100;
    year = number % 10000;

    switch(month){
        case 1: correctMaxDay = 31; break;
        case 2: correctMaxDay = 28; break;
        case 3: correctMaxDay = 31; break;
        case 4: correctMaxDay = 30; break;
        case 5: correctMaxDay = 31; break;
        case 6: correctMaxDay = 30; break;
        case 7: correctMaxDay = 31; break;
        case 8: correctMaxDay = 31; break;
        case 9: correctMaxDay = 30; break;
        case 10: correctMaxDay = 31; break;
        case 11: correctMaxDay = 30; break;
        case 12: correctMaxDay = 31; break;
    }
    if(correctMinDay <= day && day <= correctMaxDay && 1 <= month && month <= 12 && year > 0){
        cout<<"Correct!"<<endl;
    }

    return 0;
}