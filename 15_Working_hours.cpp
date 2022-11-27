//WAP to check wether it's working hours or not
#include <iostream>

using namespace std;

int main()
{
    float time;

    cout << "Enter time" << endl;
    cin >> time;

    if (time >= 9 && time <= 18) //compound conditional statements
        cout << "Working hours" << endl;
    else
        cout << "Leisure hours" << endl;
    return 0;
}