// Summary: class car is defined, then sub classes override, then base class method made as virtual the pure virtual
#include <iostream>

using namespace std;

class Car
{
public:
    virtual void start() = 0;
};


class Innova : public Car
{
public:
    void start() { cout << "Innova Started" << endl; }
};


class Swift : public Car
{
public:
    void start() { cout << "Swift Started" << endl; }
};


int main()
{
    // Car c;
    Car *p = new Innova();
    p->start();
    p = new Swift();
    p->start();
}