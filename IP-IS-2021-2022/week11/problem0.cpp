#include<iostream>
using namespace std;
const int MAX_SIZE = 50;

void changeString(char* text){
    if(*text == '\0'){
        return;
    }

    if('0' <= *text && *text <= '9'){
        *text = '#';
    } else if('a' <= *text && *text <= 'z'){
        *text -= 32;
    } else if('A' <= *text && *text <= 'Z'){
        *text += 32;
    }

    return changeString(text + 1);
}

int main()
{
    char str[MAX_SIZE];
    cin.getline(str, MAX_SIZE);
    changeString(str);
    cout<<"The result: "<<str<<endl;
    return 0;
}