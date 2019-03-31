#ifndef NAIVE
#define NAIVE

#include <list>
#include "Board.hpp"

class NaiveAlgorithm {
public:
  NaiveAlgorithm(int, int, int);
  ~NaiveAlgorithm();
  int solutions;
  void run();

private:
  int Factorial(int);
  int rows, columns, queens;
  bool runned;
  void solve(Board *, int);
};

#endif
