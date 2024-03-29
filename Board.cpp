#include "Board.hpp"

Board::Board(int n_rows, int n_columns)
    : n_rows{n_rows}, n_columns{n_columns},
      tiles(n_rows, std::vector <char>(n_columns, '*')),
      queens{std::list< Queen *>()}
    {}

Board::~Board() {
  for (auto queen: queens) {
    delete queen;
  }
}

void Board::inspect() {
  std::cout << " ";
  for (int col = 0; col < n_columns; ++col) {
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
  for (int col = 0; col < n_columns; ++col) {
    std::cout << "--";
  }
  std::cout << std::endl;
}

Queen * Board::addQueen(int line, int column) {
  Queen *q_piece = new Queen(line, column);
  tiles[line][column] = 'Q';
  queens.push_back(q_piece);
  return q_piece;
}

bool Board::removeQueen(Queen *queen) {
  unsigned int old_size = queens.size();
  queens.remove(queen);
  tiles[queen->row][queen->column] = '*';
  return (queens.size() < old_size);
}

bool Board::isSafe(int line, int column) {
  for (auto queen : queens) {
    if (queen->row == line)
      return false;
    if (queen->column == column)
      return false;
    if (std::abs(queen->row - line) == std::abs(queen->column - column))
      return false;
  }
  return true;
}

int Board::numQueens() {
  return queens.size();
}

void Board::showQueens() {
  std::cout << "\nQueen positions " << std::endl;
  int num = 1;
  for (Queen *queen : queens) {
    std::cout << "Q" << num << " Line: " <<
      queen->row << " Column: " << queen->column << std::endl;
    ++num;
  }
  std::cout << '\n';
}
