//
// Created by Szymon Nowicki on 15/03/2026.
//
#include <iostream>
#include <vector>
#include <string>
#include "FileManager.h"
#include "ToDoList.h"


void toDoList::load() {
    loadTasks(tasks);
}

void toDoList::save() {
    saveTasks(tasks);
}

void toDoList::showTasks() {

    std::cout << "\nYour tasks:\n";

    for (int i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }
}

void toDoList::addTask() {

    std::string task;

    std::cout << "Enter task: ";
    std::cin.ignore();
    getline(std::cin, task);

    tasks.push_back(task);

    save();
}

void toDoList::removeTask() {
    int index;

    std::cout << "Enter task number: ";
    std::cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        save();
    }
}