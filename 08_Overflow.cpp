// Program to demonstrate overflow
#include <iostream>

using namespace std;

int main()
{
    char x = 128;

    cout << (int)x << endl;
    ++x;
    cout << (int)x;
    return 0;
}