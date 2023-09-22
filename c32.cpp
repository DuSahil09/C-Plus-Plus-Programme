#include <iostream>
using namespace std;
class simple
{
private:
    int data1,data2,data3;
public:
    simple(int a,int b = 9,int c = 8){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void simple::printData()
{
    cout<<"The datas are "<<data1<<","<<data2<<" and "<<data3<<endl;
}

int main(){
    simple p(12,45);
    p.printData();
    return 0;
}