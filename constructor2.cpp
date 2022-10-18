#include<iostream>
using namespace std;

class landis
{
    public:

   landis make()
    {
   const int a=3;
    cout<<a;

    }
   
};

int main()
{
  landis  l;//=landis::make();
  l.make();
  return 0;
}

class 