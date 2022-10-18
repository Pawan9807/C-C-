#include<iostream>
using namespace std;

struct A{
    virtual void d()
    {
        cout<<" a "<<endl;
    }
};
struct B: A{
    void d()
    {
        cout<<" b"<<endl;
    }
};

void f(A args){  // it call d() in base class
    args.d();
}     

void g(A& args){  // it call d() in derived class
    args.d();
}
int main()
{
   
   B x;
   g(x);
   f(x);
     // it gives output through run time
  // x.d();  // it give output on compile time
}