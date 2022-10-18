#include<iostream>
//#include<conio.h>
using namespace std;

class Pawan {
    public:
   int a;
   int mul;

 
   printmul()
   {
    mul=a*a;
  
   cout<<mul;
   }
};
int main()
{
    Pawan p;
   p.a=4;
   p.printmul();
   
   return 0;
}
