#include<iostream>
using namespace std;
const int MAX = 30;

void message(char* firstWord, char* secondWord){
    if(*firstWord == '\0' && *secondWord == '\0'){
		return;
	}

	if(*firstWord == '\0'){
		cout<<*secondWord;
		return message(firstWord, secondWord + 1);
	} else if(*secondWord == '\0'){
		cout<<*firstWord;
		return message(firstWord + 1, secondWord);
	}

	cout<<*firstWord<<*secondWord;
	return message(firstWord + 1, secondWord + 1);
}

int main()
{
    char firstWord[MAX], secondWord[MAX];
    cin.getline(firstWord, MAX);
    cin.getline(secondWord, MAX);
	message(firstWord, secondWord);
    return 0;
}