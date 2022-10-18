#include<iostream>
using namespace std;

class circle
{
    int radius;
     circle()
    {
       radius =4;
        cout<<"line size of "<<" "<<radius<<endl;

    }
    public:
    
    static circle fun()
    {
          static circle *l;
          if(l==NULL) 
          {
            circle s;
            l=&s;
          }      
        else{
            cout<<"present"<<endl;
        } 
        return *l;
    }
/*
    void cm()
    {  int pi=radius*pi;

        cout<<"size in cm"<<radius<<endl;
    }
  */  
};

int main()
{
    circle as=circle::fun();
    as.fun();
    as.fun();
    return 0;
}