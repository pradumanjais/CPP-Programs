//WAP to find the sum of first n namtural numbers
#include <iostream>

using namespace std;

int main()
{
    int n, sum;

    cout << "Enter the number upto which you wish to find the sum" << endl;
    cin >> n;

    sum = n * (n + 1) / 2;

    cout << "Sum of first natural numbers upto " << n << " is " << sum << endl;
    return 0;
}