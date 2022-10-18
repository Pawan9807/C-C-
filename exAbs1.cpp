#include<iostream>
using namespace std;

class sum{
    //sum holds private data members which can acces 
    //by the member function of that class
    
    private:
    int a,b,c;

    public:
     void add(int x,int y)
     {
        a=x;
        b=y;
        c=a+b;
        cout<<"sum of a and b:"<<c<<endl;
     }

};
int main()
{
    sum s;
    s.add(4,5);
}