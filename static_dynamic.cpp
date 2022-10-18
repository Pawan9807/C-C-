#include<iostream>
using namespace std;

class B{
    public:
    virtual void test(){}
};
class D:public B{};

void f(B* pb)
{
    
       D* pd1=dynamic_cast<D*>(pb);  //runtime 
    D* pd2=static_cast<D*>(pb);  //compile time
 
}

int main()
{
    B* pb;
    
       D* pd1=dynamic_cast<D*>(pb);  //runtime polymorphism
    D* pd2=static_cast<D*>(pb);  //compile time

     cout<<pd1<<endl;
     cout<<pd2<<endl;
    return 0;
}