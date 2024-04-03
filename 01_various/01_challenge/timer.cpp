
#include "timer.hpp"

#include <iostream>

Timer ::Timer() {
  start = std::chrono::high_resolution_clock::now();
  //   std::cout << "Resource acquired\n";
}

Timer::~Timer() {
  std::chrono::time_point<std::chrono::high_resolution_clock> end;
  end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  //   std::cout << "Resource released\n";
  std::cout << "Elapsed time: " << duration.count() << " milliseconds" << std::endl;
}