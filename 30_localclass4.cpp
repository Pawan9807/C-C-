#include<iostream>
using namespace std;


class A{

      public:
        void display1()
        {
           cout<<"hello";
        }
};

class B :public A{
    
    public:
    /*  
      B(){

        display1();
      }
*/
        void   display(){
           
        cout<<"dfa";
        }
};  





int main()
{
    
 B b;
b.display1();
 

/*
B b;

A *p=NULL;
p=&b;

p->display1();
*/
}
