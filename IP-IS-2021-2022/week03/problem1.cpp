#include<iostream>
using namespace std;
int main(){
    int year, month;
	cin>>year>>month;
    bool isLeapYear;
	if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                isLeapYear = true;
            } else{
                isLeapYear = false;
                }
        } else{
            isLeapYear = true;
        }
    } else{
        isLeapYear = false;
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        cout << "31" << endl; break;
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        cout << "30" << endl; break;
    }
    case 2:
    {
        if (isLeapYear)
        {
            cout << "29" << endl;
        } else{
            cout << "28" << endl;
        }
    } break;
    default:
    {
        cout << "This is not a valid month" << endl;
    }
    }

    return 0;
}