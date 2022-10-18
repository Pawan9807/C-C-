#include<iostream>
using namespace std;
  
class A{      
   private:   
       int x;
       
   class Nested {
      int y;   
      
      void NestedFun(A *e) {
        cout<<e->x; 
//private member can be called inside nested class        
      }       
   }; 
}; 
  
int main()
{     
   //A::Nested n;
 //  n.NestedFun();
    
    //Nested a;
   // a.NestedFun();
  
}