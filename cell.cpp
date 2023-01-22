#include <vector>
#include <string>
#include <algorithm> // for sort
#include "state.h"
#include "cell.h"
using std::sort;
using std::string;


/**
 * Sort the two-dimensional vector of ints in descending order.
 */
void CellSort(vector<vector<int>> *v) { sort(v->begin(), v->end(), Compare); }

std::string CellString(State cell) {
  switch (cell) {
  case State::kObstacle:
    return "⛰️   ";
  case State::kPath:
    return "🚗  ";
  case State::kStart:
    return "🚦  ";
  case State::kFinish:
    return "🏁   ";
  default:
    return "0   ";
  }
}

/**
 * Compare the F values of two cells.
 */
bool Compare(const vector<int> a, const vector<int> b) {
  int f1 = a[2] + a[3]; // f1 = g1 + h1
  int f2 = b[2] + b[3]; // f2 = g2 + h2
  return f1 > f2;
}