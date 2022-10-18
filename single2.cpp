#include<iostream>
using namespace std;

class A
{
    protected:
    int a;

     public:
       void show_A(int x)
       {   a=x;
        //cout<<"enter value of a: \n";
        //cin>>a;
       }

       void display_A()
       {

        cout<<"Value of a: \n"<<a;
        cout<<endl;
       }
};

class B: public A
{
     int b,mul;

     public:
       void show_B(int x,int y)
       {  
         show_A(x);
         b=y;
        //cout<<"enter value of b: \n";
        //cin>>b;
       }
     void display_B()
     {
        display_A();
        cout<<"value of b :\n"<<b;
        cout<<endl;
     }

     void product()
     {
        mul=a*b;
        cout<<"product of a & b:"<<mul;

     }
};
int main()
{
    B obj;
    obj.show_B(4,5);
    obj.display_B();
    obj.product();
    return 0;
}