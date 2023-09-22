#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printNumber()
    {
        cout << "The complex  number is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 9;
    b = 3;
}
int main()
{
    complex a1;
    a1.printNumber();
    return 0;
}