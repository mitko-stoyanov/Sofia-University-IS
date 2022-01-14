#include<iostream>
using namespace std;

void fillArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void positiveRotation(int arr[],int n,int k){
    while(k > 0){
        int lastElement = arr[n - 1];		
	    for (int i = n - 1; i > 0; i--)	
		    arr[i] = arr[i - 1];		
	    arr[0] = lastElement;   
        k--;
    }
}

void negativeRotation(int arr[], int n, int k){
    while(k < 0){
        int firstElement = arr[0];		
	    for (int i = 0; i < n - 1; i++)	
		    arr[i] = arr[i + 1];		
	    arr[n - 1] = firstElement;   
        k++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n], rotations;
    fillArray(arr, n);
    cout<<"Enter the number of rotations: ";
    cin>>rotations;
    if(rotations > 0){
        positiveRotation(arr, n, rotations);
    } else if(rotations < 0){
        negativeRotation(arr, n, rotations);
    }
    printArray(arr, n);
    return 0;
}