#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "cell.h"
#include "state.h"

using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

vector<State> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<State> row;
  while (sline >> n >> c && c == ',') {
    if (n == 0) {
      row.push_back(State::kEmpty);
    } else {
      row.push_back(State::kObstacle);
    }
  }
  return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile(path);
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      std::cout << CellString(board[i][j]);
    }
    std::cout << "\n";
  }
}
