#include<iostream>
using namespace std;
const int MAX = 50;

void replace(char* arr, char* symbol, char* newSymbol){
    if(*arr == '\0'){
        return;
    }

    if(*arr == *symbol){
        *arr = *newSymbol;
    }

    return replace(arr + 1, symbol, newSymbol);
}

int main(){
    char array[MAX], symbol[2], newSymbol[2];
    cout<<"Enter a word or sentence: ";
    cin.getline(array, MAX);
    cout<<"Enter which symbol do you want to change: ";
    cin.getline(symbol, 1);
    cout<<"With which symbol do you want to change it: ";
    cin.getline(newSymbol, 1);
    replace(array, symbol, newSymbol);
    cout<<"The result is: "<<array<<endl;
}