//WAP to write a file.
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream outfile("Acp.txt");
    outfile<<"Hello Praduman"<<endl;
    outfile<<21<<endl;

    outfile.close();
}