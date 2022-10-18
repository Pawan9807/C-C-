#include<string>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    map<int,string> sample_map{{1,"one"},{2,"two"}};
    sample_map[3]="three";
    sample_map.insert({4,"four"})

    map<int,string>::iterator it;

    for(it=sample_map.begin();it!=sample_map.end();it++)
    {  cout<<it->second<<" ";
    }
    cout<<endl;
}