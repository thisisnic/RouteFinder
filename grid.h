#ifndef GRID
#define GRID

#include "state.h"

#include <vector>
using std::vector;

// Calculate the manhattan distance
int Heuristic(int x1, int y1, int x2, int y2);

/**
 * Expand current nodes's neighbors and add them to the open list.
 */
void ExpandNeighbors(const vector<int> &current, int goal[2],
                     vector<vector<int>> &openlist,
                     vector<vector<State>> &grid);

/**
 * Add a node to the open list and mark it as open.
 */
void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openlist,
               vector<vector<State>> &grid);

/**
 * Check that a cell is valid: on the grid, not an obstacle, and clear.
 */
bool CheckValidCell(int x, int y, vector<vector<State>> &grid);

/**
 * Implementation of A* search algorithm
 */
vector<vector<State>> Search(vector<vector<State>> grid, int init[2],
                             int goal[2]);

#endif