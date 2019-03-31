#include "Board.hpp"
#include "NaiveAlgorithm.hpp"

void modify_queen(Queen &q) {
  q.column = 9999;
}

int main(void) {
  // Board b2 = Board(4, 4);
  // b2.inspect();
  //
  // Queen q = Queen(0, 0);
  // std::cout << "Queen Column " << q.column << std::endl;
  // q.column = 1;
  // std::cout << "Queen Column " << q.column << std::endl;
  // modify_queen(q);
  // std::cout << "Queen Column " << q.column << std::endl;
  //
  // b2.addQueen(0, 0);
  // b2.showQueens();
  // b2.inspect();
  // std::cout << b2.isSafe(3, 1);
  // b2.showQueens();

  NaiveAlgorithm na1 = NaiveAlgorithm(1, 1, 1);
  na1.run();
  std::cout << "1x1, 1 Queen -> Num solutions: " << na1.solutions << std::endl;

  NaiveAlgorithm na2 = NaiveAlgorithm(2, 2, 2);
  na2.run();
  std::cout << "2x2, 2 Queen -> Num solutions: " << na2.solutions << std::endl;

  NaiveAlgorithm na3 = NaiveAlgorithm(3, 3, 3);
  na3.run();
  std::cout << "3x3, 3 Queen -> Num solutions: " << na3.solutions << std::endl;

  NaiveAlgorithm na4 = NaiveAlgorithm(4, 4, 4);
  na4.run();
  std::cout << "4x4, 4 Queen -> Num solutions: " << na4.solutions << std::endl;

  NaiveAlgorithm na5 = NaiveAlgorithm(5, 5, 5);
  na5.run();
  std::cout << "5x5, 5 Queen -> Num solutions: " << na5.solutions << std::endl;

  NaiveAlgorithm na6 = NaiveAlgorithm(6, 6, 6);
  na6.run();
  std::cout << "6x6, 6 Queen -> Num solutions: " << na6.solutions << std::endl;

  NaiveAlgorithm na7 = NaiveAlgorithm(7, 7, 7);
  na7.run();
  std::cout << "7x7, 7 Queen -> Num solutions: " << na7.solutions << std::endl;

  NaiveAlgorithm na8 = NaiveAlgorithm(8, 8, 8);
  na8.run();
  std::cout << "8x8, 8 Queen -> Num solutions: " << na8.solutions << std::endl;

  NaiveAlgorithm na9 = NaiveAlgorithm(9, 9, 9);
  na9.run();
  std::cout << "9x9, 9 Queen -> Num solutions: " << na9.solutions << std::endl;
  return 0;
}
