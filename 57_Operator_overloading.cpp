// WAP to add complex numbers.
#include<iostream>

using namespace std;

class Complex
{
    public:
    int real,img;
    Complex(int r=0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex x)    //add(Complex x)
    {
        Complex temp;
        temp.real = real+x.real;
        temp.img = img+x.img;
        return temp;
    }
};

int main()
{
    int r,i;
    cout<<"Enter the real and img part of 1st no."<<endl;
    cin>>r>>i;
    Complex c1(r,i);
    cout<<"Enter the real and img part of 2nd no."<<endl;
    cin>>r>>i;
    Complex c2(r,i);
    Complex c3;
    // c3 = c1.add(c2);
    c3 = c1+c2; // operator overloaded.
    cout<<"Addition is "<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}