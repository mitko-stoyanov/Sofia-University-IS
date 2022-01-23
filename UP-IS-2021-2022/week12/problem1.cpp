#include<iostream>
using namespace std;
const int MAX = 30;

void recStrlen(const char* text, int length){
	if(*text == '\0'){
		cout<<"The length is: "<<length<<endl;
		return;
	}

	return recStrlen(text + 1, length + 1);
}

int main()
{
	char text[MAX];
	cin.getline(text, MAX);
	recStrlen(text, 0);
	return 0;
}