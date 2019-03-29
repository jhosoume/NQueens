#include "Board.hpp"

Board::Board(unsigned int n_rows, unsigned int n_columns)
    : n_rows{n_rows}, n_columns{n_columns},
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
}

bool Board::isSafe(unsigned int line, unsigend int column) {
  return true;
}
