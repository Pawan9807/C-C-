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

class second : public first{

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
class Addition: public second{
    
     public:

  
      void add()
     {  
           input_x();
           input();
   
        int sum;
         sum=x+y;
         cout<<"addition of x and y:"<<sum;
      }

};

int main()
{  
   Addition obj;
 //  obj.input_x();
 //  obj.input();
   obj.add();
}