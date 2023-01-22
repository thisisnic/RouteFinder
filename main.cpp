#include "board.h"
#include "cell.h"
#include "grid.h"
#include "state.h"

//#include "test.cpp"

int main() {
  int init[2]{0, 0};
  int goal[2]{4, 5};
  auto board = ReadBoardFile("1.board");
  auto solution = Search(board, init, goal);
  PrintBoard(solution);
  // Tests
  // TestHeuristic();
  // TestAddToOpen();
  // TestCompare();
  // TestSearch();
  // TestCheckValidCell();
  // TestExpandNeighbors();
}