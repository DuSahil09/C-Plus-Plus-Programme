// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex(int, int);
//     void printNumber()
//     {
//         cout << "the complex name is " << a << "+" << b << "i" << endl;
//     }
// };
// complex ::complex(int x, int y)
// {
//     a = x;
//     b = y;
// }
// int main()
// {
//     complex a1(2, 4);
//     a1.printNumber();
//     complex b1 = complex(5, 6);
//     b1.printNumber();
//     return 0;
// }

#include <iostream>
using namespace std;
class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayPoint()
    {
        cout << "The point is (" << a << "," << b << ")" << endl;
    }
};
int main()
{
    point p(3, 5);
    p.displayPoint();
    point q(7, 9);
    q.displayPoint();
    return 0;
}