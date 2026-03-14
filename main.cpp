//
// Created by Szymon Nowicki on 14/03/2026.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int guess;
    cout << "Guess a number!" << endl;
    cin >> guess;
    cout << "You guessed:" << guess << endl;

    srand(time(0));
    int secret = rand() % 100+1;

    if (guess > secret) {
        cout << "Too high!" << endl;
    }
    else if (guess < secret) {
        cout << "Too low!" << endl;
    }
    else {
        cout << "You win!" << endl;
    }
    cout << "The number was " << secret << endl;
    return 0;
}