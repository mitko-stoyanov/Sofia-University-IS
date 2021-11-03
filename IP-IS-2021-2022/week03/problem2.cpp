#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if (num >= 0 && num <= 9)
    {
        switch(num)
        {
            case 0 :
            case 6 :
            case 9 :
            {
                cout << "1" << endl;
            }
            break;
            case 1 :
            case 2 :
            case 3 :
            case 4 :
            case 5 :
            case 7 :
            {
                cout << "0" << endl;
            }
            break;
            case 8 :
               cout << "2" << endl;
            default:
            break;
        }
   
    }
    else 
    {
        cout << "Not a digit" << endl;
    }

    return 0;
}