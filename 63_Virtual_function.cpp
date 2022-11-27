// WAP to illustrate the use of virtual function.
#include<iostream>

using namespace std;

class Base
{
public:
    void fun()
    {
        cout<<"fun of base"<<endl;
    }
};

class Vbase
{
public:
    virtual void fun()
    {
        cout<<"fun of vbase"<<endl;
    }
};

class Derived: public Base
{
public: 
    void fun()
    {
        cout<<"fun of derived"<<endl;
    }
};

class Vderived:public Vbase
{
public:
    void fun()
    {
        cout<<"fun of derived"<<endl;
    }
};

int main()
{
    Derived d;
    Base *p = &d;
    p->fun();

    Vderived vd;
    Vbase *vp = &vd;
    vp->fun();
    return 0;
}