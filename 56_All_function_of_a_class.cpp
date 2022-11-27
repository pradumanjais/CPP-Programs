// WAP to write a perfect class.
#include<iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle();                         //constructor
    Rectangle(int l, int b);             //constructor
    Rectangle(Rectangle(&x));             //constructor
    void setLenghtBreadth(int l, int b); //mutators
    int getLength();                     //accessor
    int getBreadth();                    //accessor
    int area();                          //facilitators
    int perimeter();                     //facilitators
    bool isSquare();                     //enquiry
    ~Rectangle();                        //destructor
};

int main()
{
    int l,b;
    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b;

    Rectangle r(l,b);

    cout<<"Length is "<<r.getLength()<<endl;
    cout<<"Breadth is "<<r.getBreadth()<<endl;
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;

    if(r.isSquare())
    {
        cout<<"Yes it is a square"<<endl;
    }

    return 0;
}

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    setLenghtBreadth(l,b);
}

Rectangle::Rectangle(Rectangle(&x))
{
    length = x.length;
    breadth = x.breadth;
}

void Rectangle::setLenghtBreadth(int l, int b)
{
    if(l>0)
        length = l;
    else
        length = 0;
    if(b>0)
        breadth = b;
    else
        breadth = 0;            
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle is destroyed"<<endl;
}