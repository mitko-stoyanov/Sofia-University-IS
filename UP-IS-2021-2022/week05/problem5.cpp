#include <iostream>
using namespace std;

bool isLetter(char symbol){
    if(symbol >= 'A' && symbol <= 'z'){
        return true;
    } else{
        return false;
    }
}

int main() {
    char symbol;
    cout<<"Enter a symbol: ";
    cin>>symbol;
    cout<<"Is it a letter? -> "<<boolalpha<<isLetter(symbol);
    return 0;
}