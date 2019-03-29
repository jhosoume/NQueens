#include "Board.hpp"

void modify_queen(Queen &q) {
  q.column = 9999;
}

int main(void) {
  Board b2 = Board(2, 2);
  b2.inspect();

  Queen q = Queen(0, 0);
  std::cout << "Queen Column " << q.column << std::endl;
  q.column = 1;
  std::cout << "Queen Column " << q.column << std::endl;
  modify_queen(q);
  std::cout << "Queen Column " << q.column << std::endl;

  return 0;
}
