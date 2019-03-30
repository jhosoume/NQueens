#ifndef BOARD
#define BOARD

#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include "Queen.hpp"

class Board {
public:
  Board(unsigned int, unsigned int);
  ~Board();
  bool hasClash;
  void inspect();
  void addQueen(unsigned int, unsigned int);
  bool isSafe(unsigned int, unsigned int);
  unsigned int numQueens();
  void showQueens();

private:
  unsigned int n_rows, n_columns, n_queens;

  std::vector< std::vector<char> > tiles;
  std::list< Queen > queens;
};

#endif
