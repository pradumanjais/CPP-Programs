#include<bits/stdc++.h>

using namespace std;

int sum(int n, ...)
{
    va_list list;
    va_start(list,n);

    int sum =0;
    for(int i=0; i<n;i++)
    {
        sum += va_arg(list,int);
    }
    return sum;
}

int main()
{
    cout<<sum(3,7,8,9)<<endl;
    cout<<sum(2,5,4)<<endl;

    return 0;   
}