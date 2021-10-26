#include <iostream>
using namespace std;
int main()
{
    int a, b, c, capacity, area;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    capacity = a * b *c ;
    area = 2 * (a*b + a*c + b*c);
    cout<<"The area is: "<<area<<endl;
    cout<<"The capacity is: "<<capacity<<endl;
    return 0;
}
