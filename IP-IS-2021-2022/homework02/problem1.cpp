#include<iostream>
using namespace std;
const int MAX = 50;

int findLength(char* text, int len = 0){
	if(*text == '\0'){
		return len;
	}
	len++;
	return findLength(text + 1, len);
}

void deleteElementInArray(char* array, int size)
{
    int counter2 = 1;
    if (size < 0){
        return;
    }
    if ('0' <= array[0] && array[0] <= '9'){
        int counter = 0;
        while (counter != size){
            array[counter] = array[counter + 1];
            counter++;
        }
        array[counter] = '\0';
        counter2 = 0;
    }

    return deleteElementInArray(array + counter2, size - 1);
}

int main()
{	
	char text[MAX];
    cout<<"Enter some text: ";
	cin.getline(text, MAX);
    int size = findLength(text);
	deleteElementInArray(text, size);
    cout<<"The result is: "<<text;
	return 0;
}