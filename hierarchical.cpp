// hirarchical inheritance
// more than one subclass is inheritance from a single 
//base class

#include<iostream>
using namespace std;

class car{
    public:  
    car()
    {
        cout<<"this is car \n";
    }
};

class bmw:  private car
{ };

class audi: private car
{

};

int main()
{
    bmw b;
    audi a;
}