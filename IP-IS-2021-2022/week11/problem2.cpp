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

void strcat(char* firstArray, int firstSize, char* secondArray, int secondSize, char* result){
    for(int i=0; i<firstSize + secondSize; i++){
        if(i<firstSize){
            result[i] = firstArray[i];
        } else{
            result[i] = secondArray[i - firstSize];
        }
    }
    result[firstSize + secondSize] = '\0';
}

int main()
{   
    char firstArray[MAX], secondArray[MAX], result[100];
    int firstSize, secondSize;
    cin.getline(firstArray, MAX);
    cin.getline(secondArray, MAX);
    firstSize = findLength(firstArray);
    secondSize = findLength(secondArray);
    strcat(firstArray, firstSize, secondArray, secondSize, result);
    cout<<"The result is: "<<result<<endl;
    return 0;
}