// multilevel
#include<iostream>
using namespace std;

class bmw{
    public:
      bmw()
      {cout<<"BMW \n";
      }
};

class audi: public bmw{

    public:
      audi()
      {
        cout<<"audi";
        cout<<endl;
      }
};

class rolls: public audi{

    public:
    rolls()
    {
        cout<<"rolls" << endl;

    }
};

int main()
{
   rolls r;
   
}