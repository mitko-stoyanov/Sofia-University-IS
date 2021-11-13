#include<iostream>
using namespace std;
int main(){
    int peopleCount;
    double ticketPrice, totalPrice;
    cin>>peopleCount>>ticketPrice;
    if(5 <= peopleCount && peopleCount <= 10){
        ticketPrice *= 0.95;
    } else if(11 <= peopleCount && peopleCount <= 20){
        ticketPrice *= 0.9;
    } else if(peopleCount >= 21){
        ticketPrice *= 0.85;
    }

    totalPrice = peopleCount * ticketPrice;
    cout<<"Total: "<<totalPrice;
    return 0;
}