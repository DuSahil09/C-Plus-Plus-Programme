#include <iostream>
using namespace std;
class wall
{
private:
    double length;
    double height;

public:
    wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    wall(wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    wall wall1(12.5, 5.4);
    wall wall2 = wall1;
    cout << "Area of wall 1 :" << wall1.calculateArea() << endl;
    cout << "Area of wall 2 :" << wall2.calculateArea() << endl;
    return 0;
}