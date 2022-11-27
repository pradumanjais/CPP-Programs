// Program to demonstrate typedef
#include <iostream>

using namespace std;

typedef int marks;

int main()
{
    marks m1, m2, m3, m4, m5;
    float percentage;

    cout << "Enter the obtained marks" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    percentage = (float)(m1 + m2 + m3 + m4 + m5) * 100 / 500;

    cout << "You have got " << percentage << " %";
    return 0;
}