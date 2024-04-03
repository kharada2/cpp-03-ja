#include <iostream>

#include "unique_ptr.hpp"

int main() {
  //   int value = 42;
  //   unique_int_ptr ptr(new int(value));
  //   std::cout << "Value: " << *ptr.get() << std::endl;

  //   int* released_ptr = ptr.release();
  //   std::cout << "Released Value: " << *released_ptr << std::endl;

  //   delete released_ptr;  // メモリを解放する必要があります

  unique_ptr<int> test1(3);
  std::cout << *test1 << std::endl;

  unique_ptr<double> test2(4.2);
  std::cout << *test2 << std::endl;

  return 0;
}