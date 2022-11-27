//WAP to find the area of a triangle.
#include <iostream>

using namespace std;

int main()
{
    float area, b, h;

    cout << "Enter base and height of triangle" << endl;
    cin >> b >> h;

    area = b * h / 2;

    cout << "Area is " << area << endl;
    return 0;
}