// WAP to find the maximum of two numbers
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    if (a > b)   // conditional statements
        cout << "Max is " << a << endl;
    else
        cout << "Max is " << b << endl;
    return 0;
}