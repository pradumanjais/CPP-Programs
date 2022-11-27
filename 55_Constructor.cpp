//  WAP to create constructors.
#include<iostream>

using namespace std;

class Rectangle
{
    private:
    int length, breadth;
    public:

    // Rectangle() // non parameterized constructor
    // {
    //     length = 0;
    //     breadth = 0;
    // }

    Rectangle(int l=0, int b=0) // parameterized constructor
    {
        setLengthBreadth(l,b);
    }

    Rectangle(Rectangle(&rect)) // copy constructor
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLengthBreadth(int l, int b)
    {
        if(l>0)
            length = l;
        else
            length = 0;    
        if(breadth>0)
            breadth = b;
        else 
            breadth = 0;        
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    int l,b;
    // Rectangle r; // can also be written as Rectangle r().
    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b;
    Rectangle r(l,b);
    cout<<"Area is "<<r.area()<<endl;

    //create copy
    Rectangle r1(r);
    cout<<"Area is "<<r1.area()<<endl;

    return 0;

}