// Write a rectangle class.
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
    Rectangle r1,r2;

    cout<<"For Rectangle 1:- "<<endl;
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>r1.l;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>r1.b;
    
    cout<<"Area of rectangle is "<<r1.area()<<endl;
    cout<<"Perimeter of rectangle is "<<r1.perimeter()<<"\n\n";

    cout<<"For Rectangle 2:- "<<endl;
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>r2.l;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>r2.b;
    
    cout<<"Area of rectangle is "<<r2.area()<<endl;
    cout<<"Perimeter of rectangle is "<<r2.perimeter()<<endl;

    return 0;
}