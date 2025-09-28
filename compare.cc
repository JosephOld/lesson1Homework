//готово

#include <iostream>
#include <vector>

bool ArrayInput1(std::vector <int> &vec1, int *length)
{
    bool error = false;
    std :: cout << "Заполните первый массив: " << std :: endl;

    for (int i = 0; i < *length; i++)
    {
        int value;
        std :: cin >> value ;
        vec1.push_back(value); 

        if (std::cin.good() == false){
            error = true;
        }
    }
    
    if (std::cin.peek() != '\n'){
        error = true;
    }

    return error;
}

bool ArrayInput2(std::vector <int> &vec1, int *length)  
{
    bool error = false;
    std :: cout << "Заполните второй массив: " << std :: endl;

    for (int i = 0; i < *length; i++)
    {
        int value;
        std :: cin >> value ;
        vec1.push_back(value); 

        if (std::cin.good() == false){
            error = true;
        }
    }
    
    if (std::cin.peek() != '\n'){
        error = true;
    }

    return error;
}



void Check(std::vector <int> &vec1, std::vector <int> &vec2)
{
    if (vec1 == vec2)
    {
        std :: cout << "1";
    }
    else
    {
        std :: cout << "0";
    }
}




int main()
{   
    std :: cout << "Hi" << std :: endl;
    int len;
    std :: cout << "Введите длину массивов: " << std :: endl;
    std :: cin >> len;
    if (len <= 0 || std::cin.good() == false || std::cin.peek() != '\n')
    {
        std :: cout << "n/a";
        exit(0);
    }
    std :: vector <int> vec1;
    std :: vector <int> vec2;

    bool check = ArrayInput1(vec1,&len);

    if (check == true){
        std :: cout << "n/a";
        exit(0);
    }
    bool check2 = ArrayInput2(vec2,&len);
    if (check2 == true){
        std :: cout << "n/a";
        exit(0);
    }

    Check(vec1,vec2);
    return 0;
}