#include<iostream>
using namespace std;
/*
void reference(int& marks)
{  
   if(marks>50)
     cout<<"passed in exam"<<endl;
     else
     cout<<"failed in exam"<<endl;
}

 int main()
{
    int marks=45;
    reference(marks);
   cout<<"obtained marks in exam"<<marks;


return 0;

}
*/
/*
void swap(int &x,int &y)
{
    int res=x;
       x=y;
       y=res;
   //cout<<x<<'\t'<<y;


}
int main()
{
    int a=23;  //x
    int b=42;  //y
  
   swap(a,b); 
       
     //  cout<<a<<'\t'<<b;
   return 0;
}
*/
int reference(int &a)
{   int x=3;
    a=x+32;
    return a;
}
int main()
{
    int a=32;
  //  cout<<reference(a)<<" "<<a;

        cout<<reference(a)<<endl;
        cout<<a;

    return 0;
}