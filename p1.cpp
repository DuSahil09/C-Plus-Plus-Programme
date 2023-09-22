#include <iostream>
using namespace std;

void func(int arr[], int length)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        product *= arr[i];
    }
}
int main()
{
    int arr[4] = {3, 4, 7, 8};
    func(arr, 5);
    return 0;
}