#ifndef NAIVE
#define NAIVE

#include <list>
#include <string>
#include "Board.hpp"

int getArguments(std::string);

class NaiveAlgorithm {
public:
  NaiveAlgorithm(int, int, int);
  ~NaiveAlgorithm();
  int solutions;
  void run(bool);

private:
  int Factorial(int);
  int rows, columns, queens;
  bool runned;
  void solve(Board &, int);
};

#endif
