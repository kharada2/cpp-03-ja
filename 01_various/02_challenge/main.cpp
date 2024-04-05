#include <iostream>

#include "templates.hpp"

int main() {
  // int result = sum<int>(1, 2, 3, 4, 6);
  int result = sum(1, 2, 3, 4, 6);
  std::cout << result << std::endl;
  return 0;
}