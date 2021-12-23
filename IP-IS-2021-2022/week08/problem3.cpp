#include<iostream>
using namespace std;

void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int checkInversions(int arr[], int n, int inversionsCounter){
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(i < j && arr[i] > arr[j]){
                inversionsCounter += 1; 
            }
        }
    }
    return inversionsCounter;
}

int main(){
    int n, inversionsCount = 0;
    cin>>n;
    int arr[n];
    fillArray(arr, n);
    cout<<"Total inversions: "<<checkInversions(arr, n, inversionsCount);
    return 0;
}