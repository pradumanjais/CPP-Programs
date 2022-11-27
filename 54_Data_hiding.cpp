//WAP to illustrate the data hiding.
#include<iostream>

using namespace std;

class Rectangle
{
    private:
    int length,breadth;
    public:
    void setLengthBreadth(int l, int b) //mutator
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

    int getLength()   //accessor
    {
        return length;
    }

    int getBreadth() //accessor
    {
        return breadth;
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
    Rectangle r;
    int l,b;
    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b;
    r.setLengthBreadth(l,b);
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;
    return 0;
}