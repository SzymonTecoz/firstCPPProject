//
// Created by Szymon Nowicki on 15/03/2026.
//

#ifndef FIRSTCPPPROJECT_TODOLIST_H
#define FIRSTCPPPROJECT_TODOLIST_H

#pragma once
#include <vector>
#include <string>


class toDoList {
    private:
        std::vector<std::string> tasks;
    public:
        void load();
        void save();

        void showTasks();
        void addTask();
        void removeTask();
};

#endif //FIRSTCPPPROJECT_TODOLIST_H