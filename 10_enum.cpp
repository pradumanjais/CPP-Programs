// Program to demonstrate enum
#include <iostream>

using namespace std;

enum day
{
    mon,
    tue,
    web,
    thur,
    fri,
    sat,
    sun
};

int main()
{
    day d;
    d = mon;

    cout << "mon = " << d;
    return 0;
}