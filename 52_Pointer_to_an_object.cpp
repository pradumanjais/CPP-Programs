// Create an object in stack and access it using pointers.
#include<iostream>

using namespace std;

class Rectangle
{
    public:
    float l, b;

    float area()
    {
        return l*b;
    }
    
    float perimeter()
    {
        return 2*(l+b);
    }
};

int main()
{
    Rectangle r, *ptr;
    ptr = &r;
    cout<<"Enter the length and breadth"<<endl;
    cin>>ptr->l>>ptr->b;

    cout<<"Area is "<<ptr->area()<<endl;
    cout<<"Perimeter is "<<ptr->perimeter();

    return 0;
}