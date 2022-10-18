#include<iostream>
using namespace std;

class company{

    public:

     MNCcompany()
     {
       cout<<" who is best compnay"<<endl;

     }
};

class LandisGyr: public company{

       public:
     MNCcompany()
     {
       cout<<" I am the best compnay"<<endl;

     }

};

class Facebook: public company{

   public:
    
     MNCcompany()
     {
       cout<<" I am the best compnay"<<endl;

     }

};

class Google: public company{

       public:
     MNCcompany()
     {
       cout<<" I am the best compnay";

     }

};
 
 int main()
 {
    company c;
    LandisGyr l;
    Facebook f;
    Google g;

    c.MNCcompany();
    l.MNCcompany();
    f.MNCcompany();
    g.MNCcompany();

    return 0;
 }