#include<iostream>
using namespace std;

class sum
{
    private:
    int a,b,c;

    public:
     void set(int x,int y)
     {
        a=x;
        b=y;
        c=a+b;
        cout<<"sum of a and b:"<<c<<endl;
     }

     int get()
     {
        return a,b;
     }

};

int main()
{ 
     sum s;
     s.set(4,5);
     cout<<s.get();
     

}