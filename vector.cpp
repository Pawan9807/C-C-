#include<iostream>
#include<vector>
using namespace std;

int main()
{
   
    vector<int> a;

    for(int i=1;i<=9;i++) //intialize vector 'a' with from 1 to 5
     a.push_back(i); 

     //print size of vector 'a'
    cout<<"\nsize :"<<a.size();
 
    cout<<"\ncapacity :"<<a.capacity();

    cout<<"\nMax_Size :"<<a.max_size();
    cout<<endl;
    a.resize(4);  //resize vector size

    cout<<"size :"<<a.size();

    if(a.empty()==false)
      cout<<"\nVector is not empty"<<endl;
    else
      cout<<"\n vector is empty";
    

    return 0;
}