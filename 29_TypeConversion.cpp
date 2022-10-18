#include<iostream>
using namespace std;
/*
void fun(int a, double b ){
    cout<<a*b<<endl;

}
void fun(double a,int b ){
    cout<<a*b<<endl;
    
}

int main()
{
    fun(3,2.3);
    fun(2.2,3);
   
}
*/

void add(int a){
    int b=12;
    cout<<a+b;
   // return a+b;
}
 void add(int a,  int b=12)
{
    cout<<a+b;
   // return a+b;
}
int main()
{
     int a=2,b=8;
  
  add(a,b);
    //add(,a);
}
