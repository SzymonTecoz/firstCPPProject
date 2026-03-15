//
// Created by Szymon Nowicki on 15/03/2026.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void toDoList() {
    vector<string> tasks;
    int choice;

    while (true) {
        cout << "\n 1. Show tasks \n";
        cout << "\n 2. Add task \n";
        cout << "\n 3. Remove task \n";
        cout << "\n 4. Exit \n";
        cout << "\n Enter your choice : ";

        cin >> choice;

        if (choice == 1) {
            cout << "\n Your tasks: \n";

            for (int i = 0; i < tasks.size(); i++) {
                cout << i + 1 << ". " << tasks[i] << endl;

            }
        }
        else if (choice == 2) {
            string task;

            cout << "\n Enter task : ";
            cin.ignore();
            getline(cin, task);
            tasks.push_back(task);
            cout << "\n Task added." << endl;

        }
        else if (choice == 3) {
            int index;
            cout << "\n Enter task number: ";
            cin >> index;

            if (index > 0 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index - 1);
                cout << "\n Task removed!\n" << endl;
            }
        }
        else if (choice == 4) {
            break;
        }
    }
}