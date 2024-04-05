#include <iostream>

#include "templates.hpp"

int main() {
  std::cout << allTrue(true, true) << std::endl;
  std::cout << allTrue(true, false) << std::endl;
  std::cout << allTrue() << std::endl;
  return 0;
}