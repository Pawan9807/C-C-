// multiple inheritance means when a class can inherit from more than one class
#include<iostream>
using namespace std;

class A{   //base class
     public:
     
     A()
     {
        cout<<"this is BMW! \n";
     }
};
class audi  //base class
{
    public:

    audi(){
        cout<<"this is audi \n";

    }

};
// car is derived from base class BMW and audi
class car : public A, public audi
{

};

int main()
{
    car obj;
    return 0;
}