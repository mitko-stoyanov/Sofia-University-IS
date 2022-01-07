#include<iostream>
using namespace std;

int findIndex(double* arr, int size){
    int index = -1;
    for(int i=1; i < size - 1; i++){
        if(((arr[i - 1] + arr[i + 1]) / 2) == arr[i]){
            index = i;
        }
    }
    return index;
}

void fillArray(double* arr, int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void printArray(double* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    double arr[30], index;
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    fillArray(arr, size);
    index = findIndex(arr, size);
    if(index == -1){
        cout<<"No such index"<<endl;
    } else{
        cout<<"The index is: "<<index<<endl;
    }
    return 0;
}