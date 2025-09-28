
#include <iostream>

void Squaring(int *array, int length);
void PrintArray(int *array, int length);
bool InputArray(int *array, int length);



int main() {
  int len;
  std :: cout << "Введите длину массива: " << std :: endl;
  std :: cin >> len;


  int arr[20];

  
  if (InputArray(arr,len) == true)
  {
    std :: cout << "n/a";
  }
  else {
     Squaring(arr, len);
     PrintArray(arr,len);
  }
 
  return 0;
}








/* Fix me*/
void Squaring(int *array, int length) {
  for (int *p = array; p - array < length; p++) {
    *p *= *p;
  }
}






void PrintArray(int *array, int length){
  for (int *p = array; p - array < length; p++)
  {
    std :: cout << *p << ' ';
  }
  
}





bool InputArray(int *array, int length){
  std :: cout << "Введите элементы " << std :: endl;
  bool check = false; 
  
  for (int i = 0;i < length && check == false; ++i)
  {
    std :: cin >> array[i] ;

    if (std::cin.good() == false)
    {
      check = true;

    }
    
  }
  if(std::cin.peek() != '\n')
  {
    check = true;
  }
  return check;
}



