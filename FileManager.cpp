//
// Created by Szymon Nowicki on 18/03/2026.
//



#include "FileManager.h"
#include <fstream>

void saveTasks(const std::vector<std::string>&tasks) {
    std::ofstream file("Tasks.txt");
    for (const auto& task : tasks) {
        file << task << std::endl;
    }
};

void loadTasks(std::vector<std::string>&tasks) {
    std::ifstream file("Tasks.txt");
    std::string task;
    while (getline(file, task)) {
        tasks.push_back(task);
    }
}