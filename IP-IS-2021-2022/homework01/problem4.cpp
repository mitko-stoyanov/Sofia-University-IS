#include <iostream>
using namespace std;

void fillArray(int arr[], int n, int number){
    int lastDigit;
    for(int i=0; i<n; i++){
       lastDigit = number % 10;
       arr[i] = lastDigit;
       number /= 10;
   }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void sortArray(int arr[], int n){
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int findNumberLength(int number){
    int counter = 0;
    while(number != 0){
        number /= 10;
        counter += 1;
    }
    return counter;
}

int main()
{   
    unsigned long number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number == 0){
        cout<<number;
    } else{
        int n;
        n = findNumberLength(number);
        int arr[n];
        fillArray(arr, n, number);
        sortArray(arr, n);
        printArray(arr, n);
    }
    return 0;
}