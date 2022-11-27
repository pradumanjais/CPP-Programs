//WAP to take users name and print a welcome message.
#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "May I know your name?" << endl;
    //cin>>name;   We will use this when we want to enter a single word.
    getline(cin, name); // This will read input untill you hit enter.
    
    cout << "Welcome Mr/Miss " << name;
    return 0;
}