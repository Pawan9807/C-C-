//single inheritance 
#include<iostream>
using namespace std;

class math {    //math is base class
    public:
     math()
     {
        cout<<"this is math \n";

     }

};

class algebra: public math{ 

  // cout<<"algebra :";

};

int main()
{
    algebra m ;
   //we can through CLass MATH and ALGEBRA   
    
}
// math- base 
//  |
//  alegbra - derived