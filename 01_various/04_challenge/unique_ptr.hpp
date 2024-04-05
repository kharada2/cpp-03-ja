#pragma once

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
  // T&の&は参照を意味する

 private:
  T* data;
};

// class unique_ptr {
//  public:
//   unique_ptr(int data) : data(new int(data)){};
//   ~unique_ptr() { delete data; };
//   int* get() { return data; }
//   int* release() {
//     int* temp = data;
//     data = nullptr;
//     return temp;
//   }
//   int& operator*() const { return *data; }

//  private:
//   int* data;
// };
