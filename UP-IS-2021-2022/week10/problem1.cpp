#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int* arr, int size){
    int* ptr = arr; // first element of array (adress);
    int* ptr1 = arr + size - 1; // last element
    while(ptr<ptr1){
        swap(ptr, ptr1);
        ptr += 1;
        ptr1 -= 1;
    }
}

int main()
{
    int arr[5] = {9, 4, 5, 3, 8};
    printArray(arr, 5);
    reverseArray(arr, 5);
    cout<<endl;
    printArray(arr, 5);
    return 0;
}