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
    };
    // void setValue(int x, double y)
    // {
    //     id = x;
    //     gpa = y;
    // }
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};
int main()
{
    student Mosarof(500, 501);
    student Habib(600, 6);

    // Mosarof.setValue(501, 500);

    Mosarof.display();
    Habib.display();

    return 0;
}
