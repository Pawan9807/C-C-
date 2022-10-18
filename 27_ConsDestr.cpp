#include<iostream>
using namespace std;
/*
int count=0;
class A
{  
       public:
     A()
    {    count++;
           cout<<" constructor called A:"<<count<<endl;
    }
    ~A()
    {    
        cout<<" destructor called A:"<<count << endl;

    count--;
 
    }
};

int main()
{
    A a,b,c;
}
*/
class A
{  
  public:
     A()
    {   
           cout<<" constructor called A:"<<endl;
    }
    ~A()
    {    
        cout<<" destructor called A:"<< endl;


    }
};

 
class B :  public A{

    
    public:
    B()
    {
        cout<<" constructor called B:"<<endl;
    }
    ~B()
    {
        cout<<" destructor called B:"<<endl;
    }

};
class C: public B{

    
    public:
    C()
    {
        cout<<" constructor called C:"<<endl;
    }

    ~C(){
         cout<<" destructor called C:"<<endl;
    }

};

int main()
{
    A *a=new C();
    delete a;

}


