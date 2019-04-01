#include "SingleQueenAlgorithm.hpp"

SingleQueenAlgorithm::SingleQueenAlgorithm(int rows, int columns, int queens)
    : solutions{0}, rows{rows}, columns{columns}, queens{queens}
    {}

SingleQueenAlgorithm::~SingleQueenAlgorithm() {
}

void SingleQueenAlgorithm::run(bool print) {
  Board board(rows, columns);
  if (rows >= queens)
    solve(board, queens);
  else
    solutions = 0;

  if (print) {
    std::cout << rows << "x" << columns << ", " << queens <<
      " Queens -> Num solutions: " << solutions << std::endl;
  }
}

void SingleQueenAlgorithm::solve(Board &board, int num_queens) {
  Queen *queen;

  if (num_queens <= 0) {
    ++solutions;
    return;
  }

  for (int column = 0; column < columns; ++column) {
    if (board.isSafe(num_queens - 1, column)) {
      queen = board.addQueen(num_queens - 1, column);
      solve(board, num_queens - 1);
      board.removeQueen(queen);
      delete queen;
    }
  }
  return;
}
