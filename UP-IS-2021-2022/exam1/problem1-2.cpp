#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"Enter coordinates: ";
    cin>>x>>y;
    bool isInRectangle = x == 1 || x >= 2 || ((x > 1 && x < 2) && (y < 2 && y > -2);
    bool isInCircle = (x <= 1 && x>= -2) && (y <= 2 && y >= -2);
    if(isInRectangle || isInCircle){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}