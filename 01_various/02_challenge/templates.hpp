#pragma once

template <typename T>
T sum(const T arg) {
  return arg;
}

template <typename T, typename... Args>
T sum(const T first, const Args... args) {
  return first + sum(args...);
}