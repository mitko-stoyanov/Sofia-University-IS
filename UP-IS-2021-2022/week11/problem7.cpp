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
    cout<<endl;
}

// (1) - {1, 4, 5, 1, 9} -> {4, 5, 9}

void removeDigit(int* arr, int &size, int n){
    for(int i=0; i<size; i++){
        if(arr[i] == n){
            for (int j = i; j < size - 1; j++){
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
}

int main()
{
    int arr[30], size, n;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Which number do you want to remove from an array? ";
    cin>>n;
    fillArray(arr, size);
    removeDigit(arr, size, n);
    printArray(arr, size);
    return 0;
}