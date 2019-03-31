#ifndef BOARD
#define BOARD

#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include "Queen.hpp"

class Board {
public:
  Board(int, int);
  ~Board();
  void inspect();
  Queen * addQueen(int, int);
  bool isSafe(int, int);
  int numQueens();
  void showQueens();
  bool removeQueen(Queen *);

private:
  int n_rows, n_columns, n_queens;

  std::vector< std::vector<char> > tiles;
  std::list< Queen *> queens;
};

#endif
