#include <iostream>
using namespace std;

/*

Title: Basic To-Do List Manager
Description: 
The Basic To-Do List Manager project in C++ is a program that allows users to manage their daily tasks by creating, viewing, and organizing a simple to-do list. 
This project focuses on utilizing arrays or simple data structures like arrays of strings to store tasks.

The program will have the following functionalities:
1. Add tasks: Allow users to add new tasks to the to-do list.
2. Display tasks: Show the list of all tasks entered by the user.
3. Remove tasks: Enable users to delete completed or unnecessary tasks from the list.
4. Mark tasks as completed: Allow users to mark tasks as completed to track their progress.

Functions will be used to handle the different functionalities, and arrays or simple data structures will store the tasks. 
User input/output functionalities will be used to interact with the user and display the to-do list.

*/

void menu() {
    cout << "Welcome to Basic To-Do List Manager!\n";
    cout << "1. Add Task\n";
    cout << "2. Display Tasks\n";
    cout << "3. Remove Task\n";
    cout << "4. Mark Task as Completed\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

void addtask(string tasks[], int& numtasks){
    cout << "Enter task: ";
    cin.ignore(); // To clear the buffer
    getline(cin, tasks[numtasks++]);
    cout << "Task added successfully!\n\n";
}

void tasklist(string tasks[], int numtasks){
    if (numtasks == 0){
        cout << "No tasks yet.\n\n";
    }else{
        cout << "To-Do List:\n\n";
        for (int i = 0; i < numtasks; i++){
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void deletetask(string tasks[], int& numtasks){
    tasklist(tasks, numtasks);
    if (numtasks == 0){
        cout << "No tasks yet.\n\n";
    }else{
        int taskNum;
        cout << "Enter the task number to remove: ";
        cin >> taskNum;
        if (taskNum >= 1 && taskNum <= numtasks) {
            for (int i = taskNum - 1; i < numtasks - 1; ++i) {
                tasks[i] = tasks[i + 1];
            }
            numtasks--;
            cout << "Task removed successfully!\n\n";
        } else {
            cout << "Invalid task number!\n\n";
        }
    }
}

void markTaskCompleted(string tasks[], int numtasks){
    tasklist(tasks, numtasks);
    if (numtasks == 0){
        cout << "No tasks yet.\n\n";
    }else{
        int taskNum;
        cout << "Enter the task number to mark as completed: ";
        cin >> taskNum;
        if (taskNum >= 1 && taskNum <= numtasks) {
            cout << "Task marked as completed!\n\n";
        } else {
            cout << "Invalid task number!\n\n";
        }
    }
}

int main() {
    int numtasks = 0;
    string tasks[100];

    int choice;

    while (true) {
        menu();
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 1:
                addtask(tasks, numtasks);
                break;
            case 2:
                tasklist(tasks, numtasks);
                break;
            case 3:
                deletetask(tasks, numtasks);
                break;
            case 4:
                markTaskCompleted(tasks, numtasks);
                break;
            case 5:
                cout << "Exiting the program.\n\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n\n";
        }
    }
}