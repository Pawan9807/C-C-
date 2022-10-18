//multipath inherit case of hybrid inheritance
// A derived class has two base classes and these two base classes
//have one common base is called multipath inherit.
// Ambiguity can arise in this type of inheritance

#include<iostream>
using namespace std;

class A{
    public:
      int a;

};
class B: public A{
      public:
      int b;
};

class C: public A{
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
    
    //obj.a=23;  // error
    //obj.a=234;  //error

//method 1: Avoiding ambiguity using the scope resolution in multipath

    obj.B::a=10; //call 'a' from class B and its from class A
   // obj.C::a=100; // call 'a' from clas C and its from class A

    obj.b=12;
    obj.c=13;
    obj.d=14;

    cout<<" a from class B :"<< obj.B::a; 
   // cout<<" a from class C  :"<< obj.C::a;
    
    cout<<" \n b : "<< obj.b;
        cout<<" \n b : "<< obj.c;
            cout<<" \n b : "<< obj.d;
   


}

// both class 'C' and 'B' inherit class A, they both have 
// single  copy of class A.
//However class D inherit both class 'B' and 'C', therefore
//Class D has two copies of class A, one from class B and 
//another from class C

/*if we need to access the data member of class A through the
object of class D, we must specify the path from which a will
be accessed, whether it from class B or class C,because compiler
cann't differentiate between two copies of class A in class D */

