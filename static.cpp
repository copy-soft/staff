#include <iostream>

void counter() {
  static int count = 0; // строка 4
  std::cout << count++;
}

int main() {
  for (int i = 0; i < 10; ++i) {
    counter();
  }
  return 0;
}
