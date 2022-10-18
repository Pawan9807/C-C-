#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    set<int> s={10,12,15,6};
    set<int>::iterator it;
    cout<<" First element is:"<<*(s.begin())<<endl;
    cout<<" Last element is:"<<*--(s.end())<<endl;

    //traversal
    for(auto it=s.begin(); it!=s.end();it++)
     {
        cout<<" "<<*it;

     }
     cout<<endl;

     if(s.empty())
     cout<<"empty ";
     else 
     cout<<" not empty";

     cout<<"\n size of set:"<<s.size();
     cout<<"\n Max size   :"<<s.max_size();

     s.erase(s.begin());  //erase(iterator)

     s.erase(12);        //erase(n)
     cout<<"\n after removing the first elementa and  element 12:" ;

     for(auto it =s.begin(); it!=s.end();it++)
     {
        cout<<" "<<*it;
     }
     s.insert(5);

     cout<<"\n After inserting the new element 5: ";
     for(auto it=s.begin();it!=s.end();it++)
     {
        cout<<" "<<*it;
     }

     if(s.count(15)==1)
     cout<<endl<<" 15 is present in the set";
     else 
     cout<<endl<<" 15 is not present";

     s.clear();   //clear set 
     if(s.empty())
     cout<<"\n Now , set is empty ";
     else 
     cout<<"\n Set is not empty";

     return 0;

}