#include<iostream>

int main(int argc, char const *argv[]) {

  unsigned u = 10, u2 = 42;
  int i = 10, i2 = 42;

  std::cout << u2 - u << '\n';
  std::cout << u- u2 << '\n';
  std::cout << i - u << '\n';
  std::cout << u - i << '\n';
  return 0;
}
