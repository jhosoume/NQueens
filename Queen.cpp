#include "Queen.hpp"
unsigned int Queen::current_id;

Queen::Queen(){}

Queen::Queen(unsigned int row, unsigned int column)
    : row{row}, column{column}, id{current_id++}
    {}

bool Queen::operator ==(const Queen& other_queen) {
  return id == other_queen.id;
}
