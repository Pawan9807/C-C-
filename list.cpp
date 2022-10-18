#include<iostream>
#include<vector>
#include<list>
using namespace std;

void print(list <int> lst)
{
    list<int>::iterator it;
    
    for(it =lst.begin(); it!=lst.end();++it)
    cout << *it <<" ";
    cout<<"\n";

}
int main()
{
    list<int> list1 ,list2;
 
  for(int i=0;i<5;i++)
  {
    list1.push_back(i);
    list2.push_front(i+5);
  }

  cout<<"\n list1: ";
  print(list1);

  cout<<"\n list2: ";
  print(list2);

  cout<<"\n list1.front(): "<<list1.front();
  cout<<"\n list1.back(): "<<list1.back();
 

   cout<<"\n list2.front(): "<<list2.front();
  cout<<"\n list2.back(): "<<list2.back();

  cout<<"\n list1.pop_front(): ";
  list1.pop_front();
  print(list1);

  cout<<"\n list2.pop_back() :";
  list2.pop_back();
  print(list2);

  return 0;
}