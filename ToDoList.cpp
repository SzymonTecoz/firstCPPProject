//
// Created by Szymon Nowicki on 15/03/2026.
//
#include <iostream>
#include <vector>
#include <string>
#include "FileManager.h"


void toDoList() {
    std::vector<std::string> tasks;
    loadTasks(tasks);

    int choice;

    while (true) {
        std::cout << "\n 1. Show tasks \n";
        std::cout << "\n 2. Add task \n";
        std::cout << "\n 3. Remove task \n";
        std::cout << "\n 4. Exit \n";
        std::cout << "\n Enter your choice : ";

        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\n Your tasks: \n";

            for (int i = 0; i < tasks.size(); i++) {
                std::cout << i + 1 << ". " << tasks[i] << std::endl;

            }
        }
        else if (choice == 2) {
            std::string task;

            std::cout << "\n Enter task : ";
            std::cin.ignore();
            getline(std::cin, task);
            tasks.push_back(task);
            saveTasks(tasks);
            std::cout << "\n Task added." << std::endl;

        }
        else if (choice == 3) {
            int index;
            std::cout << "\n Enter task number: ";
            std::cin >> index;

            if (index > 0 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index - 1);
                saveTasks(tasks);
                std::cout << "\n Task removed!\n" << std::endl;
            }
        }
        else if (choice == 4) {
            break;
        }
    }
}