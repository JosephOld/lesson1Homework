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


void Navigate(int *array, int len) {
  for (int i =0; i < len; i+=2) {
    std::cout << *(array + i);
  }
}


int main() {
  int len = 5;
  int arr[5];
  bool check = InputArray(arr, len);
  if (check == false) {
    Navigate(arr, len);
  } else {
    std::cout << "n/a";
  }
  return 0;
}