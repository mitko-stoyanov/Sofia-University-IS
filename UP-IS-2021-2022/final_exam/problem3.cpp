#include<iostream>
using namespace std;
const int MAX_SIZE = 50;

int countValidCases(char* arr,int result){
    if(*arr == '\0'){
        return result;
    }
    if(('a' <= *arr && *arr <= 'z') || ('1' <= *arr && *arr <= '9')){
            if('A' <= *(arr + 1) && *(arr + 1) <= 'Z'){
                result += 1;
            }
        }
    return countValidCases(arr + 1, result);
}

int main()
{
    int result = 0;
    char arr[MAX_SIZE];
    cout<<"Enter a string: ";
    cin.getline(arr, MAX_SIZE);
    cout<<countValidCases(arr, result);
    return 0;
}