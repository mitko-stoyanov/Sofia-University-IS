#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    	if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
    cout<<"Is leap year"<<endl;

                }else{
                      cout<<"Is not leap year"<<endl;
                }
            }else{
                      cout<<"Is leap year"<<endl;
            }
        }else{
                      cout<<"Is not leap year"<<endl;
            }
    return 0;
}