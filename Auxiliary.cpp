#include "Auxiliary.hpp"

  int getIntArgument(std::string arg) {
    int int_arg = 0;
    try {
      std::size_t pos;
      int_arg = std::stoi(arg, &pos);
      if (pos < arg.size()) {
        std::cerr << "Trailing characters after number: " << arg << '\n';
      }
    } catch (std::invalid_argument const &ex) {
      std::cerr << "Invalid number: " << arg << '\n';
    } catch (std::out_of_range const &ex) {
      std::cerr << "Number out of range: " << arg << '\n';
    }

    return int_arg;
  }
