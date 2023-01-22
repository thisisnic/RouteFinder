#ifndef CELL_H
#define CELL_H

#include <vector>
#include <string>
#include "state.h"
using std::vector;
using std::string;

void CellSort(vector<vector<int>> *v);

string CellString(State cell);

bool Compare(const vector<int> a, const vector<int> b);

#endif