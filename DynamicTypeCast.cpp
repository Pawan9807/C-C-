#include<iostream>
using namespace std;

class B {};
class D: public B{};

void f(B* pb, D* pd){

    D* pd2=static_cast<D*>(pb); //D can have fields and method that are not in B due to this , it is not safe

    B* pb2=static_cast<B*>(pd); //D always contains all of B so it is safe conversion
}

int main()
{
    
    return 0;
}