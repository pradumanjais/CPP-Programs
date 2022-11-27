/*
 WAP to find the nature of roots of quadratic equation.
 if discriminent d = 0 roots are real and equal
 if d > 0 roots are real and unequal
 if d < 0 roots are imaginary
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d;
    float r1, r2;

    cout << "Enter the coefficient of given equation" << endl;
    cin >> a >> b >> c;

    d = pow(b, 2) - 4 * a * c;

    if (d == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << -b / (2 * a);
    }
    else if (d > 0)
    {
        cout << "Roots are real and unequal" << endl;
        cout << (-b + sqrt(d)) / (2 * a) << endl;
        cout << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else
        cout << "Roots are imaginary" << endl;
    return 0;
}