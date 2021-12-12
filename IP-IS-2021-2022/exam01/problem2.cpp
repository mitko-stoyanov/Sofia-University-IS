#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void fillArray(int arr[]){
    int currentNum;
    srand (time(NULL));
    for(int i=0; i<5; i++){
        do{
            currentNum = rand() % 10;
        } while(currentNum > 6);
        arr[i] = currentNum;
    }
}

// не е нужна функцията за задачата
// просто проверявах fillArray фунцията работи коректно
void printArray(int arr[]){
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}

//12422 - Correct
bool isThrowCorrect(int arr[]){
    int counter = 0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i] == arr[j]){
                counter += 1;
            }
        }
    }
    if(counter >= 3){
        return true;
    }
    return false;
}

int main(){
    int arr[5], totalThrows = 0, currentCorrectThrows = 0;
    while(currentCorrectThrows < 3){
        fillArray(arr);
        if(isThrowCorrect(arr) == true){
            currentCorrectThrows += 1;
        } else{
            // ако не е изпълнено условието зануляваме брояча
            // трябват ни 3 последователни правилни хвърляния
            currentCorrectThrows = 0;
        }
        totalThrows += 1;
    }
    cout<<"Total throws: "<<totalThrows;
    return 0;
}