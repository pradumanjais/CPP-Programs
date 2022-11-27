// WAP to create an object in heap and access it.
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
    Rectangle *ptr = new Rectangle();
    cout<<"Enter the length and breadth"<<endl;
    cin>>ptr->l>>ptr->b;

    cout<<"Area is "<<ptr->area()<<endl;
    cout<<"Perimeter is "<<ptr->perimeter()<<endl;

    return 0;
}