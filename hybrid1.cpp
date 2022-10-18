#include<iostream>

using namespace std;
/*
 class bmw{
    public:
    bmw()
    {cout<<" bmw "<<endl;
    }
 };

 class audi : public bmw{
    public:
    audi()
    {cout<<" audi "<<endl;
    }
 };
 class rolls{
    public:
    rolls()
    {
        cout<<" rolls "<<endl;
    }
 };

 class car : public rolls ,public audi{
              public:
                car()
                {
                    cout<<" all is car";
                }
 };


 int main()
{
    car c;
}
*/

//problem in output repeated
 class bmw{
    protected:
      int a;
    public:
    bmw()
    {
        cout<<" bmw cost is: "<<endl;
        cin>>a;
    }
 };

 class audi : public bmw{
    protected:
      int b;
    public:
    audi()
    
    {  
        cout<<" audi cost is: "<<endl;
        cin>>b;
    }
 }; 
 class rolls{
    protected:
    int c;
    public:
    rolls()
    {    //int c;
        cout<<" rolls cost is: "<<endl;
        cin>>c;
    }
 };

 class car : public audi,public rolls {
              public:
                void Tcost()
                {   
                    bmw();
                    audi();
                    rolls();
                    cout<<" all  car cost is:"<<a*b*c;
                }
 };


 int main()
{
    car c;
    c.Tcost();
}
//Actually multipath inherit case is arise
//due to this problem repeated arise