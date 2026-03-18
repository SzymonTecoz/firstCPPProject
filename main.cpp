//
// Created by Szymon Nowicki on 14/03/2026.
//

#include <iostream>
#include <cstdlib>
#include "ToDoList.h"

int main() {
    toDoList();
    int guess;
    srand(time(0));
    int secret = rand() % 10 + 1;
    std::cout << "Guess a number!" << std::endl;
    while (guess != secret) {
        std::cin >> guess;
        if (guess == secret) {
            std::cout << "Correct!" << std::endl;
        } else if (guess > secret) {
            std::cout << "Too high" << std::endl;
        } else if (guess < secret) {
            std::cout << "Too low" << std::endl;
        }
    }
    return 0;
}
