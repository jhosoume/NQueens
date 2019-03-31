#include "Board.hpp"
#include "NaiveAlgorithm.hpp"
#include "Auxiliary.hpp"

int main(int argc, char** argv) {

  std::string num_lines = argv[1];
  std::string num_columns = argv[2];
  std::string num_queens = argv[3];
  int print_sols = getIntArgument(argv[4]);


  NaiveAlgorithm na = NaiveAlgorithm(getIntArgument(num_lines),
                                     getIntArgument(num_columns),
                                     getIntArgument(num_queens));
  na.run(print_sols);

  // NaiveAlgorithm na2 = NaiveAlgorithm(2, 2, 2);
  // na2.run();
  // std::cout << "2x2, 2 Queen -> Num solutions: " << na2.solutions << std::endl;
  //
  // NaiveAlgorithm na3 = NaiveAlgorithm(3, 3, 3);
  // na3.run();
  // std::cout << "3x3, 3 Queen -> Num solutions: " << na3.solutions << std::endl;
  //
  // NaiveAlgorithm na4 = NaiveAlgorithm(4, 4, 4);
  // na4.run();
  // std::cout << "4x4, 4 Queen -> Num solutions: " << na4.solutions << std::endl;
  //
  // NaiveAlgorithm na5 = NaiveAlgorithm(5, 5, 5);
  // na5.run();
  // std::cout << "5x5, 5 Queen -> Num solutions: " << na5.solutions << std::endl;
  //
  // NaiveAlgorithm na6 = NaiveAlgorithm(6, 6, 6);
  // na6.run();
  // std::cout << "6x6, 6 Queen -> Num solutions: " << na6.solutions << std::endl;
  //
  // NaiveAlgorithm na7 = NaiveAlgorithm(7, 7, 7);
  // na7.run();
  // std::cout << "7x7, 7 Queen -> Num solutions: " << na7.solutions << std::endl;

  // NaiveAlgorithm na8 = NaiveAlgorithm(8, 8, 8);
  // na8.run();
  // std::cout << "8x8, 8 Queen -> Num solutions: " << na8.solutions << std::endl;

  //NaiveAlgorithm na9 = NaiveAlgorithm(9, 9, 9);
  //na9.run();
  //std::cout << "9x9, 9 Queen -> Num solutions: " << na9.solutions << std::endl;
  return 0;
}
