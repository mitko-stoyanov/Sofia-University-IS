#include<iostream>
using namespace std;

void sortAscending(int* arr, int size){
    int* ptr = arr;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++)
        if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

void fillArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[20];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    fillArray(arr, size);
    int* ptr = arr;
    sortAscending(ptr, size);
    printArray(ptr, size);
    return 0;
}