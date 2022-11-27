// WAP to overload insertion operator.
#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    friend ostream &operator<<(ostream &out, Complex &x);
};

ostream &operator<<(ostream &out, Complex &x)
{
    out << x.real << "+i" << x.img;
    // return out;
}

int main()
{
    Complex c1(3, 7);
    cout << c1 << endl; // agr void use krenge to c1 ke age endl ni kr payenge

    operator<<(cout, c1);
}