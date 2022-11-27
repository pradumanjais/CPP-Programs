//WAP to illustrate the function overriding.
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

class derived1: public Base
{

};

class derived2: public Base
{
public:    
    void fun()
    {
        cout<<"fun of derived2"<<endl;
    }
};

int main()
{
    Base b;
    derived1 d1;
    derived2 d2;
    b.fun();
    d1.fun();
    d2.fun();
    return 0;
}
