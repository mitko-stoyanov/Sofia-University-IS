#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    bool doesExist = false;
    string triangleType = "";
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    doesExist = (a < b + c) &&
                (b < a + c) &&
                (c < a + b) &&
                (a > c - b) &&
                (b > c - a) &&
                (c > b - a);

    if(doesExist){
        if(a == b && b == c){
            triangleType = "Equilateral triangle.";
        }
        else if(a == b || b == c || a == c){
            triangleType = "Isosceles triangle.";
        }
        else if (a != b && b != c && a != c)
        {
            triangleType = "Scalene triangle.";
        }

        cout<<"The triangle exist. "<<triangleType<<endl;
    }
    else{
        cout<<"The triangle does not exist!"<<endl;
    }

    return 0;
}
