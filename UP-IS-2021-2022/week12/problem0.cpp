#include<iostream>
using namespace std;

int sumOfDigits(int number){
	if(0 <= number && number <= 9){
		return number;
	}

	return number % 10 + (sumOfDigits(number / 10));
}

int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<"The sum is: "<<sumOfDigits(number)<<endl;
	return 0;
}