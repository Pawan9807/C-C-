#include <iostream>    
using namespace std;    
// overriding in polymorphism
class Animal {    

 public:    
   void eat()
  {      
   cout<<"Eating...";      
   }        
};
     
class Dog: public Animal      
{      
   public:    
    void eat()      
    { 
     cout<<"Eating bread...";      
    }      
};  

int main(void)
 {    
   Dog d = Dog();      
   d.eat();    
   return 0;    
}    