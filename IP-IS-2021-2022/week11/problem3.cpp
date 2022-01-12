#include<iostream>
using namespace std;
const int MAX = 50;

void findLength(char* array, int length = 0){
    if(*array == '\0'){
        cout<<"The length is: "<<length<<endl;
        return;
    }

    length++;
    return findLength(array + 1, length);
}

int main()
{
    char array[MAX];
    cout<<"Enter a word or sentence: ";
    cin.getline(array, MAX);
    findLength(array);
}