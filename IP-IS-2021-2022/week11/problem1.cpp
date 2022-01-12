#include<iostream>
using namespace std;
const int MAX = 50;

int length(char* array){
    static int totalLength = 0;

    if(*array == '\0'){
        return totalLength;
    }

    totalLength++;
    return length(array + 1);
}

void strcpy(char* firstArray, int firstSize, char* result){
    for(int i=0; i<firstSize; i++){
        result[i] = firstArray[i];
    }
    result[firstSize] = '\0';
}

int main()
{
    char firstArray[MAX], result[100];
    int firstSize;
    cin.getline(firstArray, MAX);
    firstSize = length(firstArray);
    strcpy(firstArray, firstSize, result);
    cout<<result;
    return 0;
}