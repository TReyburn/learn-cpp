#include "iostream"

int main() {
  int num;

  std::cout << "what's your favorite number?" << std::endl;
  std::cout << "enter between 1 and 100: ";
  std::cin >> num;

  if (num < 1 || num > 100) {
    std::cout << num << " is not a valid number. only between 1 and 100"
              << std::endl;
    return 1;
  }

  std::cout << "oh wow - " << num << " is my favorite number too" << std::endl;
  return 0;
}
