#pragma once
#include <vector>

template <typename T>
class unique_ptr {
 public:
  unique_ptr(T data) : data(new T(data)){};
  ~unique_ptr() { delete data; };
  T* get() { return data; }
  T* release() {
    T* temp = data;
    data = nullptr;
    return temp;
  }
  T& operator*() const { return *data; }

 private:
  T* data;
};
