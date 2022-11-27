// WAP to perform all bitwise operations
#include <iostream>

using namespace std;

int main()
{
    int x = 11, y = 7, z;

    z = x & y;
    cout << "Bitwise and " << z << endl;

    z = x | y;
    cout << "Bitwise or " << z << endl;

    z = x ^ y;
    cout << "Bitwise xor " << z << endl;

    z = ~x;
    cout << "Bitwise one's compliment " << z << endl;

    z = x << 1;
    cout << "Left shift " << z << endl;

    z = x >> 1;
    cout << "Right shift " << z << endl;

    return 0;
}