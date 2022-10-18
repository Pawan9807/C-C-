#include<iostream>
using namespace std;



int x=23; //it may be called :: scope 
void fun()
{
static int x=22;
//first local class
class Test1{
    
      
    public:
    Test1(){
        cout<<"test: "<<endl;
    }
  };
 // second local class
    class Test2{
   //   Test1 t1;
    public:
    //   Test1 t1;
     
    
    void method()
    {   Test1 t1;

        cout<<"x="<<::x<<endl;
        cout<<x;
    }
       
  };
//Test::method
Test2 t;
t.method();
}
int main()
{
    fun();
} 

/*
// inherit properties 
int x=23;
void fun()
{

//first local class
class Test1
{
    
      
    public:
    Test1(){
        cout<<"test: "<<endl;
    }
  };
 // second local class
    class Test2 : public Test1{
   //   Test1 t1;
    public:
    //   Test1 t1;
     
    
    void method()
    {   //Test1 t1;

        cout<<"x="<<x<<endl;
    }
       
  };


Test2 t;
t.method();
}
int main()
{
    fun();
}
*/