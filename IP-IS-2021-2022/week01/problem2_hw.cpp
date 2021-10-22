#include<iostream>
using namespace std;
int main()
{
    double farenheit, celsius, kelvin, result;
    cout<<"Enter Farenheit degrees: "<<endl;
    cin>>farenheit;
    int userChoice;
    cout<<"Type 1 for Celsius or 2 for Kelvin: "<<endl;
    cin>>userChoice;
    
    if (userChoice == 1){
        result = (farenheit - 32) * 5 / 9;
        cout<<"Celsius is: "<<result<<endl;
    }

    else if (userChoice == 2){
        result = (farenheit - 32) * 5 / 9 + 273.15;
        cout<<"Kelvin is: "<<result<<endl;
    }
    else{
        cout<<"Wrong number!"<<endl;
    }
    return 0;
}