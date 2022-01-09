#include<iostream>
using namespace std;

// without recursion 
void swapcase(char* arr){
    char* ptr = arr;
    do{
        if('a' <= *arr && *arr <= 'z'){
            *ptr -= 32;
        } else{
            *ptr += 32;
        }
        ptr++;
    } while(*ptr != '\0');
}

int main()
{
    char arr[30];
    cin.getline(arr, 30);
    swapcase(arr);
    cout<<arr<<endl;
    return 0;
}