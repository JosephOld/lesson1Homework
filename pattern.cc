#include <iostream>
const int MAX_SIZE = 20;




bool InputArray(int *array, int *length)          // Ввод массива с првоеркой на корректность ввода
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


void Check(int *array, int *length)
{
     bool increasing = true;
     bool decreasing = true;
     bool invarible = true;

    for (int i = 0; i < *length - 1; ++i)
    {
        if (array[i] > array[i + 1])
        {
            increasing = false;
            invarible = false;
        }
        else if  (array[i] < (array[i + 1]))      
        {
            decreasing = false;
            invarible = false;
        }
            
    }
    
    if (increasing == true)
    {
        std :: cout << "1";
    }
    else if (decreasing == true)
    {
        std :: cout << "2";
    }
    else if (invarible == true)
    {
        std :: cout << "3";
    }
    else
    {
        std :: cout << "0";
    }
}






int main()
{
    int len;
    std :: cout << "Введите длину массива: " << std :: endl;
    std :: cin >> len;

    if (len > MAX_SIZE)
    {
        std :: cout << "n/a" << std :: endl;
        exit(0);
    }
    int arr[MAX_SIZE];
    bool checking = InputArray(arr, &len);
    Check(arr, &len);
    

    
}