// 2nd method : avoid ambiguity using virtual class in multipath inherit problem
#include<iostream>
using namespace std;

class A{
    public:
      int a;

};
class B:virtual public A{ //virtual 
      public:
      int b;
};
class C:virtual public A{
    public:
    int c;

};

class D: public B,public C{
    public:
    int d;
};

int main()
{
    D obj;

  
    obj.a=10; 
    obj.a=100; //here it is override of previous a
    obj.b=12;
    obj.c=13;
    obj.d=14;
 cout<<" \n a: "<< obj.a;
 cout<<" \n b : "<< obj.d;
 cout<<" \n b : "<< obj.b;
 cout<<" \n c : "<< obj.c;
 cout<<" \n d : "<< obj.d;

 return 0;
}