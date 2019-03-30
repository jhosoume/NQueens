#ifndef NAIVE
#define NAIVE

#include <list>
#include "Board.hpp"

class NaiveAlgorithm {
public:
  NaiveAlgorithm(unsigned int, unsigned int, unsigned int);

  std::list< Board > solutions;
  unsigned int numSolutions();
private:
};

#endif
