/*
+----------------------------+
|           ClI.cpp          |
+----------------------------+
*/

#include <iostream>
#include "CLI.h"

using namespace std;

void CLI::run() {
    displayMenu();
    handleInput();
}

void CLI::displayMenu() const {
    cout << "Welcome to Sudoku!" << endl;
    cout << "1. Load puzzle" << endl;
    cout << "2. Quit" << endl;
}

void CLI::loadPuzzle() {
    cout << "Enter the puzzle, row by row. Use 0 to represent empty cells." << endl;
    grid.print(); // Call the displayPuzzle() function on the grid instance
}

void CLI::handleInput() {
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Loading puzzle..." << endl;
            loadPuzzle();
            break;
        case 2:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
}

