#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<string> str_set{"car" ,"car1","car2"};
    set<char> ch_set{'a','b','c','d'};
    set<int> int_set{1,2,3,4,5};

    for(int i=0;i<4;i++)
    {
        int_set.insert('a'+i);
      
       // cout<<endl;
    }
    //  cout<<int_set.size();
    cout<<"string set size :"<<str_set.size();
    cout<<endl;
    cout<<"string set size :"<<ch_set.size();
    

    return 0;
}