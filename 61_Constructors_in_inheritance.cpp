// Constructors in inheritance.
#include<iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Non-param of base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of base "<<x<<endl;
    }
};

class Derived: public Base
{
public:
    Derived()
    {
        cout<<"Non Param of Derived"<<endl;
    }
    Derived(int a)
    {
        cout<<"Param  of Derived "<<a<<endl;
    }
    Derived(int x, int a):Base(x)
    {
        cout<<"Param of derived "<<a<<endl;
    }
};

int main()
{
    Derived();
    Derived(10);
    Derived(15,10);
    return 0;
}