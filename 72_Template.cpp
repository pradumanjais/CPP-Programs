// WAP to create template.
#include<iostream>

using namespace std;

int maximum(int x, int y)  // work with only integers.
{
    return x>y?x:y;
}


template<class T>    // work with all data types.
T maximum(T x, T y)
{
    return x>y?x:y;
}
