/*
+----------------------------+
|           Grid.cpp           |
+----------------------------+
*/

#include <iostream>
#include "Grid.h"

using namespace std;

Grid::Grid() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            grid[i][j].value = 0;
        }
    }
}	

void Grid::print() const {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            cout << grid[i][j].value << " ";
        }
        cout << endl;
    }
}