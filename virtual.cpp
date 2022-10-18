#include<iostream>
using namespace std;

class A
{
    public:
    virtual  void display()
    {
       cout<<"disl";
    }
  /*  void show()
    {
        cout<<"ad";
    }*/
};

class B: public A{

    public:
    void display()
    {
        cout<<"das";

    }
    void show()
    {
        cout<<"ada";
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

    A* p2= new B();
    p2->display();
   // p->show();
   //c.display();
 }