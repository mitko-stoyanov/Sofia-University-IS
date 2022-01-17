#include<iostream>
using namespace std;

void sortAscending(int *arr, int size){
    for(int i=0; i<size; i++){
        for(int j=i + 1; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void uniteArrays(int *firstArray, int firstSize, int *secondArray, int secondSize, int *result, int size){
    sortAscending(firstArray, firstSize);
    sortAscending(secondArray, secondSize);

    for(int i=0; i<firstSize+secondSize; i++){
        if(i < firstSize){
            result[i] = firstArray[i];
        } else{
            result[i] = secondArray[i - firstSize];
        }
    }
}

void fillArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int firstArray[40], secondArray[40], result[40], firstSize, secondSize;
    cin>>firstSize>>secondSize;
    fillArray(firstArray, firstSize);
    fillArray(secondArray ,secondSize);
    uniteArrays(firstArray, firstSize, secondArray, secondSize, result, 0);
    printArray(result, firstSize + secondSize);
    return 0;
}