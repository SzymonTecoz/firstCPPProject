//
// Created by Szymon Nowicki on 14/03/2026.
//

#include <iostream>
#include <cstdlib>
#include "ToDoList.h"
using namespace std;
int main() {
    toDoList();
    int guess;
    srand(time(0));
    int secret = rand() % 10+1;
    cout << "Guess a number!" << endl;
    while (guess != secret) {
        cin >> guess;
        if (guess == secret) {
            cout << "Correct!" << endl;
        }
        else if (guess > secret) {
            cout << "Too high" << endl;
        }
        else if (guess < secret) {
            cout << "Too low" << endl;
        }
    }


    return 0;
}