/*
+----------------------------+
|           ClI.h            |
+----------------------------+
*/

#ifndef CLI_H
#define CLI_H

#include <iostream>
#include "Grid.h"

class CLI {
public:
    void run();
private:
    Grid grid;

    void displayMenu() const;
    void handleInput();
    void loadPuzzle();


};

#endif // CLI_H