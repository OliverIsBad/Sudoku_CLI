# Sudoku Rules

Sudoku is a popular logic-based number puzzle. The objective is to fill a 9x9 grid with digits so that each column, each row, and each of the nine 3x3 subgrids that compose the grid (also called "boxes", "blocks", or "regions") contain all of the digits from 1 to 9. Here are the detailed rules:

## Basic Rules

1. **Grid Structure**:
   - The Sudoku grid consists of 9 rows and 9 columns, making 81 cells in total.
   - The grid is divided into nine 3x3 subgrids.

2. **Initial Setup**:
   - Some cells are pre-filled with numbers. These are known as "givens" or "clues".
   - The number of pre-filled cells can vary, and more clues typically make the puzzle easier to solve.

3. **Objective**:
   - Fill the empty cells with numbers from 1 to 9 according to the following rules.

## Filling Rules

1. **Row Rule**:
   - Each row must contain the numbers 1 through 9 without repetition.

2. **Column Rule**:
   - Each column must contain the numbers 1 through 9 without repetition.

3. **Subgrid Rule**:
   - Each 3x3 subgrid must contain the numbers 1 through 9 without repetition.

## Strategy Tips

1. **Single Candidate**:
   - If a cell can only take one possible number, fill it in.

2. **Single Position**:
   - If a number can only go in one position within a row, column, or subgrid, place it there.

3. **Scanning**:
   - Use a process of elimination by scanning rows, columns, and subgrids to determine where numbers can and cannot go.

4. **Pencil Marks**:
   - Use small pencil marks to note potential numbers for a cell, then eliminate possibilities as you gather more information.

5. **Advanced Techniques**:
   - As you become more experienced, you can learn and apply advanced solving techniques such as naked pairs, naked triples, pointing pairs, box-line reduction, and more.

## Common Terminology

- **Cell**: An individual box in the Sudoku grid where a number can be placed.
- **Row**: A horizontal line of 9 cells.
- **Column**: A vertical line of 9 cells.
- **Subgrid (Box, Block, Region)**: One of the nine 3x3 sections of the grid.
- **Givens (Clues)**: Pre-filled numbers in the grid.
- **Candidate**: A possible number that can be placed in an empty cell.

## Example Sudoku Puzzle

Below is an example of a Sudoku puzzle and its solution:

![Sudoku Puzzle](sudoku.jpg)