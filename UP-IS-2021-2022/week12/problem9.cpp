#include<iostream>
using namespace std;

// without recursion 
// void swapcase(char* arr){
//     char* ptr = arr;
//     do{
//         if('a' <= *arr && *arr <= 'z'){
//             *ptr -= 32;
//         } else{
//             *ptr += 32;
//         }
//         ptr++;
//     } while(*ptr != '\0');
// }

// with recursion
void swapcase(char* arr){
    if(*arr == '\0'){
        return;
    }

    if('a' <= *arr && *arr <= 'z'){
        *arr -= 32;
        return swapcase(arr + 1);
    }

    if('A' <= *arr && *arr <= 'Z'){
        *arr += 32;
        return swapcase(arr + 1);
    }

    return swapcase(arr + 1);
}

int main()
{
    char arr[30];
    cin.getline(arr, 30);
    swapcase(arr);
    cout<<arr<<endl;
    return 0;
}