// WAP to derive a class cuboid from the base class rectangle
//destructor do bar q print ho rha h ????
#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();                         // constructor
    Rectangle(int l, int b);             // constructor
    Rectangle(Rectangle(&x));            // constructor
    void setLenghtBreadth(int l, int b); // mutators
    int getLength();                     // accessor
    int getBreadth();                    // accessor
    int area();                          // facilitators
    int perimeter();                     // facilitators
    bool isSquare();                     // enquiry
    // ~Rectangle();                        // destructor
};

class cuboid : public Rectangle
{
private:
    int height;
public:
    cuboid(int h=0)
    {
        height = h;
    }
    void setHeight(int h);
    int getHeight();
    int volume();
    friend ostream & operator<<(ostream &out, cuboid x);
    // ~cuboid();
};

ostream & operator<<(ostream &out, cuboid x)
{
    out<<"l="<<x.getLength()<<" b="<<x.getBreadth()<<" h="<<x.height;
    return out;
}

int main()
{
    int l, b,h;
    cout << "Enter the length, breadth and height" << endl;
    cin >> l >> b>>h;

    cuboid c(h);
    c.setLenghtBreadth(l,b);

    cout << "Length is " << c.getLength() << endl;
    cout << "Breadth is " << c.getBreadth() << endl;
    cout << "Height is " << c.getHeight() << endl;
    cout << "Area is " << c.area() << endl;
    cout << "Volume is " << c.volume() << endl;

    cout<<c<<endl;


    // cout << "Perimeter is " << r.perimeter() << endl;

    // if (r.isSquare())
    // {
    //     cout << "Yes it is a square" << endl;
    // }

    return 0;
}

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    setLenghtBreadth(l, b);
}

Rectangle::Rectangle(Rectangle(&x))
{
    length = x.length;
    breadth = x.breadth;
}

void Rectangle::setLenghtBreadth(int l, int b)
{
    if (l > 0)
        length = l;
    else
        length = 0;
    if (b > 0)
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
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

// Rectangle::~Rectangle()
// {
//     cout << "Rectangle is destroyed" << endl;
// }


// for derived class
void cuboid:: setHeight(int h)
{
    height = h;
}

int cuboid:: getHeight()
{
    return height;
}

int cuboid:: volume()
{
    return getLength()*getBreadth()*getHeight();
}

// cuboid::~cuboid()
// {
//     cout<<"Cuboid is destroyed"<<endl;
// }