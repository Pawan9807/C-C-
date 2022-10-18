#include<iostream>
using namespace std;
class overload
{
    int a,b;
    public:
    overload():a(0),b(0)
    {

    }
    void in()
    {
        cout<<"first and second number: \n";
        cin>>a>>b;
    }


void operator--()
{
    a=--a;
    b=--b;
}
 
 
void out()
  {
    cout<<"decremented elements of the objects \n"<<a<<"\n"<<b;
    cout<<endl;

  }
  
};

int main()
{
    overload obj;

    obj.in();
    --obj;
    obj.out();
    return 0;
}