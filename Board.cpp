#include "Board.hpp"

Board::Board(unsigned int n_rows, unsigned int n_columns)
    : hasClash{false}, n_rows{n_rows}, n_columns{n_columns},
      tiles(n_rows, std::vector <char>(n_columns, '*'))
    {}

Board::~Board() {
}

void Board::inspect() {
  std::cout << " ";
  for (unsigned int col = 0; col < n_columns; ++col) {
    std::cout << "--";
  }
  std::cout << std::endl;

  for (auto line : tiles) {
    std::cout << "|";
    for (auto tile : line) {
      std::cout << tile << " ";
    }
    std::cout << "|" << std::endl;
  }

  std::cout << " ";
  for (unsigned int col = 0; col < n_columns; ++col) {
    std::cout << "--";
  }
  std::cout << std::endl;
}

void Board::addQueen(unsigned int line, unsigned int column) {
  Queen q_piece(line, column);
  tiles[line][column] = 'Q';
  queens.push_back(q_piece);
  if (!isSafe(line, column))
    hasClash = true;
}

bool Board::isSafe(unsigned int line, unsigned int column) {
  for (auto queen : queens) {
    if (queen.row == line)
      return false;
    if (queen.column == column)
      return false;
    if (std::abs(queen.row - line) == std::abs(queen.column - column))
      return false;
  }
  return true;
}

unsigned int Board::numQueens() {
  return queens.size();
}

void Board::showQueens() {
  std::cout << "\n\nQueen positions " << std::endl;
  unsigned int num = 1;
  for (auto queen : queens) {
    std::cout << "Q" << num << " Line: " <<
      queen.row << " Column: " << queen.column << std::endl;
    ++num;
  }
  std::cout << '\n';
}
