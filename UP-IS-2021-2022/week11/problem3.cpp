#include<iostream>
using namespace std;

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

void sortDescending(int* arr, int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[30], size;
    cout<<"Enter the size: ";
    cin>>size;
    fillArray(arr, size);
    sortDescending(arr, size);
    printArray(arr, size);
    return 0;
}