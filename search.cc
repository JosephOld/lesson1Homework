#include <iostream>

const int MAX_SIZE = 30;

bool Input(int *array, int *length)          // Ввод массива с првоеркой на корректность ввода
{ 
    std :: cout << "Введите элементы: " << ' ';
    bool error = false;
    
          
            

            if (*length <= 0 || std::cin.good() == false){
                error = true;
            }

            for (int i = 0;i < *length and error == false; i++)
            {
                std :: cin >> array[i];
            }

            if(std::cin.peek() != '\n')
            {
                error = true;
            }

        
        return error;

}


bool SearchElement(int *array, int *length, int *element)     //Проверка на наличие нужного байта (170)
{   
    
    bool check = false;
    for (int i = 0; i < *length; i++)
    {
         if (array[i] == 170)
         {
           *element = array[i]; 

            check = true;
         }
           
    }
    return check;
    
}


int main()
{

    int arr[MAX_SIZE];
    int len;
    int element;
    std :: cout << "Введите длину массива: " << std :: endl;
    std :: cin >> len;

    if (len > MAX_SIZE)
    {
        std :: cout << "n/a" << std :: endl;
        exit(0);
    }

    
    if (check == true)
    {
        std :: cout << "n/a";
    }

    bool checkElement = SearchElement(arr, &len, &element);
    if ( checkElement == false && check == false)
    {
        std :: cout << "-1";
    }
    else if(checkElement == true && check == false)
    {
        
        std :: cout << &element;
    }
    
}