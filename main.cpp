#include "Board.hpp"
#include "NaiveAlgorithm.hpp"

void modify_queen(Queen &q) {
  q.column = 9999;
}

int main(void) {
  Board b2 = Board(4, 4);
  b2.inspect();

  Queen q = Queen(0, 0);
  std::cout << "Queen Column " << q.column << std::endl;
  q.column = 1;
  std::cout << "Queen Column " << q.column << std::endl;
  modify_queen(q);
  std::cout << "Queen Column " << q.column << std::endl;

  b2.addQueen(0, 0);
  b2.showQueens();
  b2.inspect();
  std::cout << b2.isSafe(3, 1);
  b2.showQueens();

  NaiveAlgorithm na2 = NaiveAlgorithm(2, 2, 1);
  na2.run();
  std::cout << "2x2, 1 Queen -> Num solutions: " << na2.numSolutions() << std::endl;
  for (auto solution : na2.solutions) {
    solution.inspect();
  }

  return 0;
}
