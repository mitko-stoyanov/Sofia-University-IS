#include <iostream>
using namespace std;
int main()
{
    double result, weight, height;
    cout<<"Enter your weight and height: ";
    cin>>weight>>height;
    result = weight / (height * height);
    if(result > 24.9){
        cout<<"Overweight. BMI: "<<result<<endl;
    }
    else if(result < 18.5){
        cout<<"Underweight. BMI: "<<result<<endl;
    }
    else{
        cout<<"The perfect weight. BMI: "<<result<<endl;
    }
    return 0;
}