#include "NaiveAlgorithm.hpp"

NaiveAlgorithm::NaiveAlgorithm(unsigned int rows, unsigned int columns, unsigned int queens)
    : rows{rows}, columns{columns}, queens{queens}
    {}

unsigned int NaiveAlgorithm::numSolutions() {
  return solutions.size();
}

void NaiveAlgorithm::run() {
  Board board(rows, columns);
  solve(board, queens);
}

void NaiveAlgorithm::solve(Board board, unsigned int num_queens) {
  Queen *queen;

  if (num_queens <= 0) {
    solutions.push_back(board);
    return;
  }

  for (unsigned int row = 0; row < rows; ++row) {
    for (unsigned int column = 0; column < columns; ++column) {
      std::cout << row << column << std::endl;
        std::cout << "Safe? " << board.isSafe(row, column) << std::endl;
        std::cout << "Num Queens " << board.numQueens() << std::endl;
        board.inspect();
      if (board.isSafe(row, column)) {
        queen = board.addQueen(row, column);
        solve(board, num_queens - 1);
        board.removeQueen(queen);
      }
    }
  }
  return;
}