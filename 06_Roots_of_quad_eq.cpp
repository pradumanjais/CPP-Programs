//WAP to find the roots of a quadratic equation
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float r1, r2;

    cout << "Enter the value of a, b, c from the given equation" << endl;
    cin >> a >> b >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots are r1 = " << r1 << " and r2 = " << r2;
    return 0;
}