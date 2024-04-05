#pragma once

bool allTrue() { return true; }

template <typename... Args>
bool allTrue(bool first, const Args... args) {
  return first && allTrue(args...);
}