#include <iostream>
using namespace std;

double evaluateDiscount(double amount, double discount) {
    return amount - amount * discount / 100;
}

int main() {
    double amount, discount;
    do {
        cout << "Enter amount: ";
        cin >> amount;
    } while (amount <= 0);
    do {
        cout << "Enter discount: ";
        cin >> discount;
    } while (discount <= 0);
    cout << "New price is: " << evaluateDiscount(amount, discount) << endl;
    return 0;
}