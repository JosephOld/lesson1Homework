#include <iostream>


bool InputArray(int *array,int *length)
{
    bool error = false;
    std :: cout << "Введите элементы: " << std :: endl;
    
    for (int i = 0; i < *length; i++)
    {
        std :: cin >> array[i];
        
        if (std::cin.good() == false)
        {
            error = true;
        }
    }
    if (std::cin.peek() != '\n')
    {
        error = true;
    }

    return error;
}


void PrintArray(int *array, int *length)
{
    for (int i = *length - 1; i != -1; --i)
    {
        std :: cout << array[i] << ' ';
    }
}


int main()
{
    int len;
    std :: cout << "Введите длину массива: " << std :: endl;
    std :: cin >> len;
    if (len <= 0)
    {
        std :: cout << "n/a";
        exit(0);
    }

    int arr[len];\

    bool check = InputArray(arr, &len);
    if (check == true)
    {
        std :: cout << "n/a";
        exit(0);
    }

    PrintArray(arr, &len);

    return 0;
}