#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int result, n, m, a;
    cout<<"Enter the numbers: "<<endl;
    cin>>n>>m>>a;
    result = ceil((double)n/a) * ceil((double)m/a);
    cout<<"The minimum number of tiles: "<<result;
    return 0;
}