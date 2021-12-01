#include <iostream>
#include <time.h>
using namespace std;

void play() {
    srand(time(NULL));
    int generatedNumber = rand() % 10;

    int counter = 0;
    int guess;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > generatedNumber) {
            cout << "DOWN" << endl;
        } else if (guess < generatedNumber) {
            cout << "UP" << endl;
        } else {
            cout << "CONGRANTS! You guessed the number." << endl;
            return;
        }
        ++counter;
    } while(counter != 3);
    cout << "You are out of guesses. SORRY!" << endl;
}

int main() {
    play();
    return 0;
}