// WAP to print grade on the basis of average marks. Grade A if avg>=60, B if 35=<avg<60 and C if avg<35.
#include <iostream>

using namespace std;

typedef int marks;

int main()
{
    marks m1, m2, m3;
    float avg;
    cout << "Enter your marks of 3 subjects" << endl;
    cin >> m1 >> m2 >> m3;

    avg = (m1 + m2 + m3) / 3.0;

    if (avg >= 60)
        cout << "Grade A" << endl;
    else if (avg >= 35 && avg < 60)
        cout << "Grade B" << endl;
    else
        cout << "Grade C" << endl;
    return 0;
}