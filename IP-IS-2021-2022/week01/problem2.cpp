#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int firstPointX, firstPointY, secondPointX, secondPointY;
    cin>>firstPointX>>firstPointY>>secondPointX>>secondPointY;
    double distance;
    distance = sqrt(pow(secondPointX - firstPointX, 2) + pow(secondPointY - firstPointY, 2));
    cout<<"The distance between two points is: "<<distance<<endl;
    return 0;
}