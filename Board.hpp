#ifndef BOARD
#define BOARD

#include <iostream>
#include <vector>
#include <list>
#include "Queen.hpp"

class Board {
public:
  Board(unsigned int, unsigned int);
  ~Board();

  void inspect();
  void addQueen(unsigned int, unsigned int);
  bool isSafe(unsigned int, unsigned int);

private:
  unsigned int n_rows, n_columns, n_queens;

  std::vector< std::vector<char> > tiles;
  std::list< Queen > queens;
};

#endif
