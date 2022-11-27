//WAP to find speed if final and intial velocity are given
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float u, v, a, speed;

    cout << "Enter intial velocity" << endl;
    cin >> u;
    cout << "Enter final velocity" << endl;
    cin >> v;
    cout << "Enter acceleration" << endl;
    cin >> a;

    speed = (pow(v, 2) - pow(u, 2)) / (2 * a);

    cout << "Speed is"<< " " << speed << endl;
    return 0;
}
