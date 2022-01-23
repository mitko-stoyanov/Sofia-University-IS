#include<iostream>
using namespace std;

int factorial(int number) {
	if (number == 0){
		return 1;
	} else{
		return number * factorial(number - 1);
	}
}

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"The factorial is: "<<factorial(number)<<endl;
}