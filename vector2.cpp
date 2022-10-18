#include<iostream>
#include<vector>
using namespace std;

#define row 3
#define col 3

int main()
{ 

  vector<vector<int>> a;
  int num=10;
  
  for(int i=0;i<row;i++)
  {
  vector<int> a1;
  
  for(int j=0;j<col;j++)
  {
    a1.push_back(num); //element insert into column
    num+=5;

  }
  a.push_back(a1);
  }
  //display 2D vector
 
  cout<<"2D vector contains : "<<"\n";
  for(int i=0; i<a.size();i++)
  {
   for (int j=0;j<a[i].size();j++)
      cout<<a[i][j]<<" ";
      cout<<endl;
   }
   
   //deletion
 
  a.pop_back();
 // a[0].pop_back();
  //a[1].pop_back();
   // a[2].pop_back();
    // a[3].pop_back();
      //a[4].pop_back();
      // a[5].pop_back();



 cout<<"2D vector traversal after deletion:"<<"\n";
 //traverse in 2D vector 'a' using iterator

  for(int i=0;i<a.size();i++)
    { for( auto it=a[i].begin();it !=a[i].end();it++)
      
    cout<<*it <<" ";
    cout<<endl;
    }

   
 return 0;
}