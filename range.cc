#include <iostream>

bool InputArray(int *array, int len) {
  bool error = false;
  std::cout << "Введите элементы: " << std::endl;
  for (int i = 0; i < len; i++) {
    std::cin >> array[i];
    if (std::cin.good() == false) {
      error = true;
    }
  }
  if (std::cin.peek()!='\n') {
    error = true;
  }
  return error;
}

void Check(int *arr, int len, int min, int max) {
  bool check = true;;
  for (int i = 0; i < len; ++i) {
    if (arr[i] < min || arr[i] > max)
    check = false;
  }
  if (check == false) {
    std::cout << "0";
  } else {
    std::cout << "1";
  }
}

int main() {
  int min, max, len;
  std::cout << "Введите длину массива: " << std::endl;
  std::cin >> len;
  if (len <= 0 || std::cin.good() == false || std::cin.peek() != '\n') {
    std::cout << "n/a";
    exit(0);
  }
  int arr[len];
  bool checking = InputArray(arr, len);
  std::cout << "Введите два числа для диапозона: " << std::endl;
  std::cin >> min >> max;
  if (checking == true) {
    std::cout << "n/a";
    exit(0);
  } else {
    Check(arr, len, min, max);
  }
  return 0;
}