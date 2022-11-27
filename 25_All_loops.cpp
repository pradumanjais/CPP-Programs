// Program to Test all Loops
#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    while (a < 10)
    {
        cout << "a = " << a << "\t";
        a++;
    }
    int b = 0;
    do
    {
        cout << "b = " << b << "\t";
        b++;
    } while (b < 10);
    for (int i = 0; i < 10; i++)
    {
        cout << "i = " << i << "\t";
    }
    return 0;
}