/*
+----------------------------+
|           Grid.h           |
+----------------------------+
*/

#ifndef GRID_H
#define GRID_H

#include <iostream>
#include "Cell.h"

class Grid {
public:
    Grid();
    void print() const;
    bool isValid(int row, int col, int num) const;
    bool isComplete() const;
    bool setCell(int row, int col, int num);
    void clearCell(int row, int col);
    int  getValue(int row, int col) const;

private:
    static const int GRID_SIZE = 9;
    Cell grid[GRID_SIZE][GRID_SIZE];
};

#endif // GRID_H