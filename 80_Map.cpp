#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;
    
    //creating iterator
    map<int, string> :: iterator itr;

    //inserting elements in map
    m.insert(pair<int, string> (1,"Praduman"));
    m.insert(pair<int, string> (2,"Aman"));

    for(itr = m.begin();itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}