#include<iostream>
using namespace std;
/*
class tcs
{
    public:
     tcs()
     {
        cout<<" Tcs \n";

     }
};

class company : public tcs 
{

};

int main()
{
    company c;
  //  tcs t;

}
*/

class Add{
    protected:
      int x;
    public:
      void input_x()
      {
        cout<<"enter value of x:"<<endl;
        cin>>x;
      }
};

class sum: public Add{
    protected:
    int y ,s;
    public:
      void input_y()
      {
         input_x();
         cout<<"enter value of y:"<<endl;
         cin>>y;
      }
      void addition()
      {
         s=x+y;
         cout<<"addition of x and y:"<<s;
      }
};

int main()
{  
   sum obj;
   obj.input_y();
   obj.addition();
}