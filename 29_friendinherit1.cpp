#include<iostream>
using namespace std;

class A{

    friend class B;
  
    int a;
};

class B{

    friend class C;
};
class C: public B{
    
    void f(A* p){
     
   p->a=2;
    //cout<<p->a;
    }
};
int main()
{

    
}
