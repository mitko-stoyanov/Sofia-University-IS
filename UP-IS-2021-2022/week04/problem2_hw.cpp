#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"The equation: a.x2+b.x+c=0"<<endl;
    int a,b,c,discriminant;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    if(a == 0){
        cout<<"Not a quadratic equation!";
        return 0;
    }
    discriminant = b * b - 4*a*c;
    double x1 = 0,x2 = 0;

    if(discriminant < 0){
        cout<<"The equation doesn't have solution!";
    } else{
        if(discriminant == 0){
            x1 = b * (-1) / (2 * a);
            cout<<"x1 = x2 = "<<x1<<endl;
        } else{
            x1 = (b * (-1) + sqrt(discriminant)) / (2*a);
            x2 = (b * (-1) - sqrt(discriminant)) / (2*a);
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }
        
    }
    return 0;
}