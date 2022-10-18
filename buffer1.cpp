
#include<iostream>
//#include<vector.h>
#include<climits>

using namespace std;

int main()
{
    int a;
    string s;

    cin>>a;
    //discard the input buffer and initial white space of string
   // cin>>ws;

    getline(cin,s);

    cout<<a;
    cout<<s;
    return 0;
}