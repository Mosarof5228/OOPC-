#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id << " " << gpa << endl;
    }
};

int main()
{
    student Mosarof, Habib;
    Mosarof.id = 101;
    Mosarof.gpa = 5.00;
    Habib.id = 102;
    Habib.gpa = 2.343;

    Mosarof.display();
    Habib.display();

    return 0;
}
