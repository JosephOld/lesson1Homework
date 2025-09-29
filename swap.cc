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

void PrintArray(int *arr, int len)
{
  for (int i = 0; i < len; ++i) {
    std::cout << arr[i] << ' ';
  }
}

void Change(int *arr1, int *arr2, int length) {
  
  for (int i = 0; i < length; ++i) {
    int save = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = save;
  }
  PrintArray(arr1,length);
  std::cout << std::endl;
  PrintArray(arr2, length);
}


int main() {
  int len;
  std::cout << "введите длину массивов: " << std::endl;
  std::cin >> len;
  if (std::cin.good() == false || std::cin.peek()!='\n') {
    std::cout << "n/a";
    exit(0);
  }
  int arr1[len], arr2[len], arr3[len];
  bool check = InputArray(arr1,len);
  bool check2 = InputArray(arr2,len);
  if (check == true || check2 == true) {
    std::cout << "n/a";
    exit(0);
  } else {
    Change(arr1, arr2, len);
  }
}