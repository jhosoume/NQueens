#ifndef SQ
#define SQ

#include <list>
#include <string>
#include "Board.hpp"

class SingleQueenAlgorithm {
public:
  SingleQueenAlgorithm(int, int, int);
  ~SingleQueenAlgorithm();
  int solutions;
  void run(bool);

private:
  int rows, columns, queens;
  void solve(Board &, int);
};

#endif
