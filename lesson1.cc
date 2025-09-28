#include <iostream>
#include <string>
#include <vector>

class Student{
private:
    std :: string name;
    std :: string surname;   

    std :: vector < int > marks;

public:
    Student(std :: string n, std :: string s): name(n), surname(s) {}
    
    void GetMark(int mark){ marks.push_back(mark);}       // заполнение динамического массива элементами

    double AverageMark(){
        if (marks.empty()) return 0;
        
        double sum = 0;
        for (int i : marks) sum += i;     //перебор элементов массива
        return sum / marks.size();        //длина массива
    }

    void PrintInfo(){
        std :: cout << "Student" << ' ' << name << ' ' << surname << std :: endl;
        std :: cout << "Average mark is" << ' ' << AverageMark() << std :: endl;
    }
};


int main()
{
    Student st("Arnold", "Shvarzneger");
    st.GetMark(2);
    st.GetMark(5);
    st.GetMark(4);
    st.PrintInfo();
    return 0;
}