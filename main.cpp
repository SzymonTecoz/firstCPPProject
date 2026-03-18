//
// Created by Szymon Nowicki on 14/03/2026.
//

#include <iostream>
#include <cstdlib>
#include "ToDoList.h"

int main() {
    toDoList list;

    list.load();

    int choice;

    while (true) {
        std::cout << "\n1. Show tasks\n";
        std::cout << "2. Add task\n";
        std::cout << "3. Remove task\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        if (choice == 1) {
            list.showTasks();

        }
        else if (choice == 2) {
            list.addTask();

        }
        else if (choice == 3) {
            list.removeTask();

        }
        else if (choice == 4) {
            break;
        }
    }

    return 0;
}
