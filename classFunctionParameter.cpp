#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id << " " << gpa << endl;
    };
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    };
};

int main()
{
    Student Mosarof, Habib;
    Mosarof.setValue(101, 5.00);
    Mosarof.display();

    Habib.setValue(102, 6.00);
    Habib.display();
    return 0;
}