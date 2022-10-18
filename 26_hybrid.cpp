#include<iostream>
using namespace std;

class first{
    protected:
      int x;
    public:
      void input_x()
      {
        cout<<"enter first value: "<<endl;
        cin>>x;
      }
};

class second{

   protected:
   int y;
    public:
      void input()
      {  
        //int y;
        cout<<"enter second value: "<<endl;
        cin>>y; 
      }
};

class multiply: public first{

    protected:
     int mul;
    public:
      void multiplication()
      {  input_x();
         mul=x*x;
         cout<<"multiply of first value: "<<mul;
         cout<<endl;
      }
};
class Addition: public first,public second{
    
     public:
      void add()
     {  
       
        //int x,y;
        int sum;
         sum=x+y;
         cout<<"addition of x and y:"<<sum;
      }

};



int main()
{  
   Addition obj;
   multiply m;
   m.multiplication();
   obj.input_x();
   obj.input();
   obj.add();
}