#include<iostream>
using namespace std;

 
class A
{
    public:
    virtual ~A()=0;
};
A::~A()
{
    cout<<" hello ";
};
class B: public A{

   public:
    ~B(){
        cout<<" display";
    }   
};

    int main()
{
    A *p=new B();
    

}