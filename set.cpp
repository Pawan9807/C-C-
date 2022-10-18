#include<iostream>
#include<set>

using namespace std;

int main()
{

    set<string> str_set{"car" ,"car1","car2"};
    set<char> ch_set{'a','b','c','d'};
    set<int> int_set{1,2,3,4,5};

    for(auto kt=str_set.begin();kt !=str_set.end();++kt)

    cout<<' '<<*kt<<endl;

    for(auto kt=ch_set.begin();kt !=ch_set.end();++kt)
    cout<<' '<<*kt<<endl;

    for(auto kt=int_set.begin();kt !=int_set.end();++kt)

    cout<<' '<<*kt<<endl;

    return 0;
}