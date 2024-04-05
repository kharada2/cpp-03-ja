#include <iostream>
#include <memory>

#include "unique_ptr.hpp"

void doSomething() {
  std::unique_ptr<int> ptr = std::make_unique<int>(4);  // c++14以降推奨
  // std::unique_ptr<int> ptr(new int(4));
  std::cout << *ptr << std::endl;
  ptr.release();
  if (!ptr.get()) {
    std::cout << "Pointer released successfully." << std::endl;
  } else {
    std::cout << "Failed." << std::endl;
  }
}

int main() {
  //   int value = 42;
  //   unique_int_ptr ptr(new int(value));
  //   std::cout << "Value: " << *ptr.get() << std::endl;

  //   int* released_ptr = ptr.release();
  //   std::cout << "Released Value: " << *released_ptr << std::endl;

  //   delete released_ptr;  // メモリを解放する必要があります

  unique_ptr<int> test1(3);
  std::cout << *test1 << std::endl;

  std::cout << test1.get() << std::endl;
  std::cout << "released: " << test1.release() << std::endl;
  // std::cout << *test1 << std::endl;

  unique_ptr<double> test2(4.2);
  std::cout << *test2 << std::endl;

  // スマートポインタで書いたら？どうなるか
  doSomething();

  return 0;
}