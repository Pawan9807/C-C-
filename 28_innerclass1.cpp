#include<iostream>
using namespace std;

class A{

    public:

    class B { 
        public:
        void display1()
        {
            cout<<"good morning ";
        }
    };
    B *z;
   

    class C: public B{

         private:
        B y; 
         A::B y2;
         
        C *x;
        A::C *x2; 
        public:
          void display()
          {
            cout<<"Hello sir";
            cout<<endl;
          }
        
    };

};

int main()
{
   A::C c; // instance create of class C inside A
  // A::B b;

   c.display();
   c.display1();
}