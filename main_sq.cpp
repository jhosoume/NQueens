#include "Board.hpp"
#include "SingleQueenAlgorithm.hpp"
#include "Auxiliary.hpp"

int main(int argc, char** argv) {

  std::string num_lines = argv[1];
  std::string num_columns = argv[2];
  std::string num_queens = argv[3];
  int print_sols = getIntArgument(argv[4]);


  SingleQueenAlgorithm na = SingleQueenAlgorithm(getIntArgument(num_lines),
                                               getIntArgument(num_columns),
                                               getIntArgument(num_queens));
  na.run(print_sols);

  // SingleQueenAlgorithm na2 = SingleQueenAlgorithm(2, 2, 2);
  // na2.run();
  // std::cout << "2x2, 2 Queen -> Num solutions: " << na2.solutions << std::endl;
  //
  // SingleQueenAlgorithm na3 = SingleQueenAlgorithm(3, 3, 3);
  // na3.run();
  // std::cout << "3x3, 3 Queen -> Num solutions: " << na3.solutions << std::endl;
  //
  // SingleQueenAlgorithm na4 = SingleQueenAlgorithm(4, 4, 4);
  // na4.run();
  // std::cout << "4x4, 4 Queen -> Num solutions: " << na4.solutions << std::endl;
  //
  // SingleQueenAlgorithm na5 = SingleQueenAlgorithm(5, 5, 5);
  // na5.run();
  // std::cout << "5x5, 5 Queen -> Num solutions: " << na5.solutions << std::endl;
  //
  // SingleQueenAlgorithm na6 = SingleQueenAlgorithm(6, 6, 6);
  // na6.run();
  // std::cout << "6x6, 6 Queen -> Num solutions: " << na6.solutions << std::endl;
  //
  // SingleQueenAlgorithm na7 = SingleQueenAlgorithm(7, 7, 7);
  // na7.run();
  // std::cout << "7x7, 7 Queen -> Num solutions: " << na7.solutions << std::endl;

  // SingleQueenAlgorithm na8 = SingleQueenAlgorithm(8, 8, 8);
  // na8.run();
  // std::cout << "8x8, 8 Queen -> Num solutions: " << na8.solutions << std::endl;

  //SingleQueenAlgorithm na9 = SingleQueenAlgorithm(9, 9, 9);
  //na9.run();
  //std::cout << "9x9, 9 Queen -> Num solutions: " << na9.solutions << std::endl;
  return 0;
}
