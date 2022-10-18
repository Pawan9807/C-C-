#include<iostream>
using namespace std;

int x;
int  *p;   
void f()
{
     static int y=4;//static variable x can be used by local clss 
   
    p=&y;
     int x; //auto variable x cann't be used by local clss 

     extern int g();// extern variable x cann't be used by local clss 
 

     class local
     {


           //int g() {return x; } // error local variable x cann't used by g()
       public:
           int h() {return y;} //valid  static variable y
           int k() { return::x; } //valid  
           int l() { return g(); } //valid
    };
    local l;
    l.h();
    
}

int main()
{ 
   f();
 
   cout<<p;
}
     
