#include <iostream>
#include <vector>

bool InputArray (std::vector <int> &vec, int len)
{
    bool error = false;
    std :: cout << "Введите элементы массива: " << std :: endl;
    
    for (int i = 0; i < len; i++)
    {   
        int value;
        std :: cin >> value;
        if (std::cin.good() == false )
        {
            error = true;
        }
        vec.push_back(value);
    }
    if (std::cin.peek() != '\n'){
            error = true;
        }
    return error;
}


void PrintArray (std::vector <int> &vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        std :: cout << vec.at(i) << ' ';
        
    }
}


int main()
{
    
    std::vector <int> vec;
    int n;
    std :: cout << "Введите длину массива: " << std :: endl;
    std :: cin >> n;
    if (n <= 0 || n > 20 || std::cin.good() == false)
    {
        std::cout << "n/a";
        exit(0);
    }

    bool check = InputArray(vec,n);
    if (check == false)
    {
        PrintArray(vec);
    }
    else{
        std :: cout << "n/a";
    }
    return 0;
}