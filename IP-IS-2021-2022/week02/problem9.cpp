#include<iostream>
using namespace std;
int main(){
    double sum;
    int from, to;
    cout << "Choose betweenn: 1 - BGN \n2 - USD \n3 - EUR\n4 - AUD\n";
    cout << "Enter <sum> <from currency> <to currency>: ";
    cin >> sum >> from >> to;

    if (sum < 0) {
        cout << "Invalid sum\n";
    } else {
        switch (from) {
            case 1: {
                switch (to) {
                    case 2: cout << sum * 0.59 << endl;
                    break;
                    case 3: cout << sum * 0.51 << endl;
                    break;
                    case 4: cout << sum * 0.79 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 2: {
                switch (to) {
                    case 1: cout << sum * 0.59 << endl;
                    break;
                    case 3: cout << sum * 0.86 << endl;
                    break;
                    case 4: cout << sum * 1.33 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 3: {
                switch (to) {
                    case 1: cout << sum * 1.96 << endl;
                    break;
                    case 2: cout << sum * 1.16 << endl;
                    break;
                    case 4: cout << sum * 1.54 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 4: {
                switch (to) {
                    case 1: cout << sum * 1.27 << endl;
                    break;
                    case 2: cout << sum * 0.75 << endl;
                    break;
                    case 3: cout << sum * 0.65 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            default: cout << "Invalid currency\n";
        }
    }

    return 0;
}