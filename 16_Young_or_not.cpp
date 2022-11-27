/*
 WAP to check weather a person is young or not and also check if he/she is eligible or not.
 A person is young if his age is greater than 12 and less than 50.\
 He/She is eligible only if age is less than 12 or greater then 50.
*/
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    if (age >= 12 && age <= 50)
    {
        cout << "Young" << endl;
    }
    else
    {
        cout << "Not Young" << endl;
    }
    if (age < 12 || age > 50)
    {
        cout << "Eligible for the offer" << endl;
    }
    else
    {
        cout << "Not eligible for the offer" << endl;
    }
    return 0;
}