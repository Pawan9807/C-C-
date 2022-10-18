#include<iostream>
using namespace std;

class outside
{
    public:
      class nested{
        public:
          static int x;
          static int y;
          int f();
          int g(); 
         };
         nested n;
};

int outside::nested::x=23;
int outside::nested::f(){
    cout<<"f:"<<x;
    return 0;
};

typedef outside::nested outnest;
int outnest::y=12;
int outnest::g()
{
    return 0;
};

int main()
{
    outside::nested n;
    n.f();

    
   // x.g();
}