//WAP to write a file.
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile("Acp.txt");  // it is for open a file.
    // infile.open("Acp.txt"); // can also be used.

    if(infile)  //    if(infile.is_open)   can also be used.
        cout<<"File is opened"<<endl;
    string str;
    int x;
    infile>>str;
    infile>>x;
    infile.close();
    cout<<str<<"\n"<<x<<endl;
    return 0;
}