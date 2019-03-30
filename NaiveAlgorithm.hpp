#ifndef NAIVE
#define NAIVE

#include <list>
#include "Board.hpp"

class NaiveAlgorithm {
public:
  NaiveAlgorithm(unsigned int, unsigned int, unsigned int);
  std::list< Board > solutions;
  unsigned int numSolutions();
  void run();

private:
  unsigned int rows, columns, queens;
  bool runned;
  void solve(Board board, unsigned int num_queens);
};

#endif
