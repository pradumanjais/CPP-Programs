#include<bits/stdc++.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length*breadth;
    }
};



int main()
{
    shared_ptr<Rectangle> ptr(new Rectangle(10,20));

    cout<<ptr->area()<<endl;

    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;
    cout<<ptr2->area()<<endl;
    cout<<ptr->area()<<endl;
    cout<<ptr.use_count()<<endl;  // give the number of pointer pointing to same object.
    return 0;
}