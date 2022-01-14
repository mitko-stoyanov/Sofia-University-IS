#include<iostream>
using namespace std;
const int MAX = 40;

// за да сравня дали съдържат еднакви букви смятам сумата от ASCII стойностите на буквите(като правя всички букви на малки),а 
// ако има space просто го пропускам. Ако накрая стойностите са еднакви - то думите съдържат едни и същи букви. 

int findSum(char* text, int sum = 0) {
	if (*text == '\0') {
		return sum;
	}
	if (*text == ' ') {
		return findSum(text + 1, sum);
	}

	if ('A' <= *text && *text <= 'Z') {
		*text += 32;
	}

	sum += *text;
	return findSum(text + 1, sum);
}

bool areWordsEqual(char* firstText, char* secondText) {
	return findSum(firstText) == findSum(secondText);
}

int main()
{
	char firstText[MAX], secondText[MAX];
	cin.getline(firstText, MAX);
	cin.getline(secondText, MAX);
	cout << "Are they equal? -> " << boolalpha << areWordsEqual(firstText, secondText) << endl;
	return 0;
}