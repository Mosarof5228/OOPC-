#include <iostream>
using namespace std;
class Car
{
public:
    int price;
    double code;
    Car(int x, double y)
    {
        price = x;
        code = y;
    }
    Car()
    {
        cout << "This is default contractor";
    }
    void display()
    {
        cout << price << " " << code << endl;
    }
};
int main()
{
    Car Bike(10, 1.1);
    Bike.display();

    Car ob;

    return 0;
}

// #include <iostream>
// using namespace std;

// class car
// {
// public:
//     int price;
//     double code;
//     car(int x, double y)
//     {
//         price = x;
//         code = y;
//     }
//     void display()
//     {
//         cout << price << " " << code << endl;
//     }
// };

// int main()
// {
//     car bike(10, 1.1);
//     bike.display();

//     return 0;
// }
