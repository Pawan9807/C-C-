#include<iostream>
#include<list>
using namespace std;

void showcontent(list <int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

}
int main()
{
    list<int> list1,list2;
    int i;
    for(int i=0;i<10;i++)
    {
        list1.push_back(i+1);
    }
    for(int i=0;i<10;i++)
    {
        list2.push_front(i+1);
    }

    cout<<"content of list 1:";
    showcontent(list1);
    
    cout<<"content of list 2:";
    showcontent(list2);
    
    list2.sort();
    cout<<"sorted List2 :";
    showcontent(list2);

    int times=5;
    while(times--)
    {
        list1.pop_front();
    }
    cout<<"content of list 1:";
    showcontent(list1);
    
    //cout<<"content of list 2:";
    //showcontent(list2);
    times=5;
    
    while(times--)
    {
        list2.pop_front();
    }

     cout<<list1.front() <<" is now at front in list 1\n";
     cout<<list2.back() <<" is now at front in list 2\n";

     list1.insert(list1.begin(),5,10); //it insert value 10 from starting to index 5
     cout<<"After Inseration list 1:";
     showcontent(list1);

     list1.remove(10);
     cout<<"After Removal list 1:";
     showcontent(list1);

     cout<<"No. of elements in list 1:";
     cout<<list1.size() <<"\n";

     list2.reverse();
     cout<<"Reversed list 2:";
     showcontent(list2);


    //erasing first element of list2
    list2.erase(list2.begin());
    cout<<"After erasing from list 2:";
    showcontent(list2);

    //remove all elements from list 1
    list1.clear();
    //use of empty() function
    if(list1.empty())
    cout<< "list 1 is now empty \n";
    else 
    cout<<"not empty \n";

    //use of assign function
    list1.assign(5,2);
    cout<<"List 1: ";
    showcontent(list1);
    
    return 0;
}
