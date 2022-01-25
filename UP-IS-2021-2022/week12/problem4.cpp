#include<iostream>
using namespace std;
const int MAX = 30;

bool areEqual(char* firstText, char* secondText){
    if(*firstText != *secondText){
        return false;
    }

    if(*firstText == '\0' && *secondText == '\0'){
        return true;
    }

    areEqual(firstText + 1, secondText + 1);
}

int main()
{
    char firstText[30], secondText[30];
    cin.getline(firstText, MAX);
    cin.getline(secondText, MAX);
    cout<<"Are equal? -> "<<boolalpha<<areEqual(firstText, secondText)<<endl;
    return 0;
}