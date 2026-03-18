//
// Created by Szymon Nowicki on 18/03/2026.
//

#ifndef FIRSTCPPPROJECT_FILEMANAGER_H
#define FIRSTCPPPROJECT_FILEMANAGER_H

#pragma once
#include <string>
#include <vector>

void saveTasks(const std::vector<std::string>&tasks);
void loadTasks( std::vector<std::string>&tasks);

#endif //FIRSTCPPPROJECT_FILEMANAGER_H