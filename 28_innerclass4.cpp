#include<iostream>
using namespace std;

class A{
    public:
    class B{
    virtual void fun()
    {
        cout<<"funda";
    }
  };
class C: public B{
    public:
     void fun()
     {
        cout<<"fud";
     }
 };
};
int main()
{

A::B *c=new A::C();
c->fun();

}
/*
class A{
    public:
    int n,m;
    
    A():n(10),m(11){}
    //or

    A():n(10){}
};
int main()
{
    A a;
    cout<<a.n<<endl;
   // cout<<a.m<<endl;
}*/