#include <iostream>


bool InputArray(int *array, int *length)        //ввод массива
{
    bool error;

    std:: cout << "Введите элементы: " << std :: endl;
    for (int i = 0; i < *length; i++ )
    {
        std :: cin >> array[i];
        if (std::cin.good() == false)
        {
            error = true;
        }
    }
    
    if (std::cin.peek() == false)
    {
        error = true;
    }

    return error;
}

void Increment(int *array, int *length)         //функция инкремента
{
    for (int i = 0; i < *length; ++i)
    {
        array[i] += 1;
        std :: cout << array[i] << ' ';
    }
}


void Decrement(int *array, int *length)      // функция декремента
{
    for (int i = 0; i < *length; ++i)
    {
        array[i] -= 1;
        std :: cout << array[i] << ' ';
    }
}


int main()
{
    int len;
    std :: cout << "Введите длину массива: " << std :: endl;
    std :: cin >> len;
    if (len <=0 )
    {
        std :: cout << "n/a";
        exit(0);
    }

    int arr[len];
    bool error = InputArray(arr, &len);              //проверка на корректность ввода

    if (error == true)
    {
        std :: cout << "n/a";
        exit(0);
    }

    int action;                                           // ввод команды
    std :: cout << "Введите команду: " << std :: endl;
    std :: cin >> action;
    
    if (action == 1)
    {
       Increment(arr, &len);
    }
    else if (action == 2)
    {
        Decrement(arr, &len);
    }
    else 
    {
        std :: cout << "n/a";
        exit(0);
    }


}