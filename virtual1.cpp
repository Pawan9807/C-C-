#include<iostream>
using namespace std;

class A
{
    public:
    virtual  void display()=0; //pure virtual function - it must be override to derive class to implement it members
    //it runtime polymorphism
};

class B: public A{
   
    public:
    void display()
    {
        cout<<"das";

    }
   
};
class C: public A{
    public:
     void display()
      {
        cout<<"C"<<endl;
      }
};
int main()
{   // C c;

    A* p= new C();
    p->display();
  //  p->fun();
   
    A* p2= new B();
    p2->display();
   // p->show();
   //c.display();
 }