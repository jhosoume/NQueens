#include "NaiveAlgorithm.hpp"

NaiveAlgorithm::NaiveAlgorithm(int rows, int columns, int queens)
    : solutions{0}, rows{rows}, columns{columns}, queens{queens}
    {}

NaiveAlgorithm::~NaiveAlgorithm() {
}

int NaiveAlgorithm::Factorial(int num) {
  return (num == 1 || num == 0) ? 1 : Factorial(num - 1) * num;
}

void NaiveAlgorithm::run(bool print) {
  Board board(rows, columns);
  solve(board, queens);
  solutions /= Factorial(queens);
  if (print) {
    std::cout << rows << "x" << columns << ", " << queens <<
      " Queens -> Num solutions: " << solutions << std::endl;
  }
}

void NaiveAlgorithm::solve(Board &board, int num_queens) {
  Queen *queen;

  if (num_queens <= 0) {
    ++solutions;
    return;
  }

  for (int row = 0; row < rows; ++row) {
    for (int column = 0; column < columns; ++column) {
      if (board.isSafe(row, column)) {
        queen = board.addQueen(row, column);
        solve(board, num_queens - 1);
        board.removeQueen(queen);
        delete queen;
      }
    }
  }
  return;
}
