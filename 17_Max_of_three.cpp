//WAP  to find the max of three numbers by using if-else ladder.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "Max is " << a << endl;
    else // we can also use here else if(b>c)
    {
        if (b > c)
            cout << "Max is " << b << endl;
        else
            cout << "Max is " << c << endl;
    }
    return 0;
}