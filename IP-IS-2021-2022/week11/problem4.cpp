#include<iostream>
using namespace std;
const int MAX = 50;

int findLength(char* array){
    static int length = 0;
    if(*array == '\0'){
        return length;
    }

    length++;
    return findLength(array + 1);
}

void swap(char* beginning, char* end){
    char temp = *beginning;
    *beginning = *end;
    *end = temp;
}

void reverse(char* array, int size){
    char* beginning = array;
    char* end = array + size - 1;
    while(beginning < end){
        swap(beginning, end);
        beginning++;
        end--;
    }
}

int main()
{
    char array[MAX];
    int size;
    cout<<"Enter a word or sentence: ";
    cin.getline(array, MAX);
    size = findLength(array);
    reverse(array, size);
    cout<<"The reversed array is: "<<array;
    return 0;
}