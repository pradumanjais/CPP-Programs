// try and catch in class.
#include <iostream>

using namespace std;

class MyException : public exception
{
    
};

int division(int x, int y)
{
    if (y == 0)
        throw MyException();
    return x / y;
}

int main()
{
    int a = 4, b = 0, z;
    try
    {
        z = division(a, b);
        cout << z << endl;
    }
    catch (...)  // all catch
    {
        cout << "Division by zero "<< endl;
    }
}