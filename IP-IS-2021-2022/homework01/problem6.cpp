#include<iostream>
using namespace std;

int circlesStatus(int x1, int y1, int r1, int x2, int y2, int r2){
        int distanceCenters = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);        
        int sumOfRadiuses = (r1 + r2) * (r1 + r2);
        if(distanceCenters == sumOfRadiuses){
            return 1;
        } else if(distanceCenters > sumOfRadiuses){
            return -1;
        } else{
            return 0;
        }
    }

int main(){
    int x1, y1, r1;
    cout<<"Enter first circle values: ";
    cin>>x1>>y1>>r1;
    int x2, y2, r2;
    cout<<"Enter second circle values: ";
    cin>>x2>>y2>>r2; 
    int result = circlesStatus(x1, y1, r1, x2, y2, r2);
    if(result == 1){
        cout << "Circle touch to each other";
    } else if(result < 0){
        cout << "Circle not touch to each other.";
    } else{
        cout << "Circle intersect to each other.";
    }
    return 0;
}