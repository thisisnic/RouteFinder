#ifndef BOARD
#define BOARD

#include <string>
#include <vector>
using std::string;
using std::vector;

#include "state.h"

vector<State> ParseLine(string line);

vector<vector<State>> ReadBoardFile(string path);

void PrintBoard(const vector<vector<State>> board);

#endif