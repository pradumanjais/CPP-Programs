#include<iostream>

using namespace std;

// void dispaly()
// {
//     cout<<"Hello World"<<endl;
// }

// int sum(int x, int y)
// {
//     int sum = x+y;
//     return sum;
// }

// void increment(int x, int y)
// {
//     x++;
//     y++;
// }

int main()
{
    // [capture_list](parameter_list)->return_type{body}; //syntax
    []()->void{cout<<"Hello World"<<endl;}();
    

    // // method one
    // cout<<[](int x, int y){int sum = x+y; return sum;}(4,6)<<endl;

    // // method two
    // auto sum = [](int x, int y){int sum = x+y; return sum;};
    // cout<<sum(4,10)<<endl;

    int a = 10, b = 20;

    cout<<[](int m, int n)->int{return m+n;}(a,b)<<endl;

    [&a,&b](int m, int n)->void{cout<<++a<<" "<<++b<<endl;}(a,b);
    [&](int m, int n)->void{cout<<++a<<" "<<++b<<endl;}(a,b);
    
    return 0;
}