#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool doesExist = (a < b + c) &&
                     (b < a + c) &&
                     (c < a + b) &&
                     (a > c - b) &&
                     (b > c - a) &&
                     (c > b - a);
    if(doesExist){
        cout<<"The triangle exist!";
    } else{
        cout<<"The triangle does not exist!";
    }
    return 0;
}