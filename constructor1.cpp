#include <iostream>
using namespace std;
// class
class student
{
public:
    int id;
    double gpa;
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout << id << " " << gpa << endl;
    }
};
int main()
{
    student Mosarof(50, 2.33);
    Mosarof.display();

    return 0;
}