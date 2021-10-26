#include <iostream>
using namespace std;
int main()
{
    int kilometers;
    double miles;
    cout<<"Input the distance in km: ";
    cin>>kilometers;
    miles = kilometers * 0.621371192;
    cout<<"The "<<kilometers<<"km/hr means "<<miles<<" m/hr"<<endl;
    return 0;
}
