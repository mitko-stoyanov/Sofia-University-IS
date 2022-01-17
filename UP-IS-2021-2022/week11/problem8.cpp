#include<iostream>
using namespace std;

int checkSize(char* arr, int size){
    int n = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == '\0'){
            break;
        }
        n += 1;
    }
    return n;
}

void uniteArrays(char* firstArray, char* secondArray, char* finalArray, int firstSize, int secondSize){
    for(int i=0; i<firstSize + secondSize; i++){
        if(i < firstSize){
            finalArray[i] = firstArray[i];
        } else{
            finalArray[i] = secondArray[i - firstSize];
        }
        finalArray[i + 1] = '\0';
    }
}

int main(){
    char firstArr[20], secondArr[20], finalArr[20];
    int firstSize, secondSize;
    cin.getline(firstArr, 20);
    cin.getline(secondArr, 20);
    firstSize = checkSize(firstArr, 20);
    secondSize = checkSize(secondArr, 20);
    uniteArrays(firstArr, secondArr, finalArr, firstSize, secondSize);
    cout<<finalArr;
    return 0;
}