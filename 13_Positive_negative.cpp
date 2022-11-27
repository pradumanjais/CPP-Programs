//WAP to check whether the given num is +ve or -ve.
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;

    if (a == 0)
        cout << "Please enter number other then 0." << endl;
    else if (a > 0)
        cout << "The number " << a << " is +ve." << endl;
    else
        cout << "The number " << a << " is -ve." << endl;
    return 0;
}