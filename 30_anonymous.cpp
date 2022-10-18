#include<iostream>
using namespace std;
//anonymous means no name of any class
//
/*class {
    int value;

    public:
     void set_data(int i)
     {
        this->value=i;
     }
     void printvalues(){
        cout<<"value:"<<this->value<<endl;
     }

}obj1;

int main()
{
    obj1.set_data(23);
    obj1.printvalues();
} */

  //2nd concept ,inheritance in anonymous
 /* 
  class {
    int value;

    public:
     void set_data(int i)
     {
        this->value=i;
     }
     void printvalues(){
        cout<<"value:"<<this->value<<endl;
     }

}myclass;//using typedef give a proper name

typedef class: public myclass {
  
       public:
       void display()
       {
        cout<<"hello:";
       }
}my;


int main()
{   //myclass  obj1,obj2;
    my ob;
    ob.display();
    ob.set_data(23);
    ob.printvalues();
}
*/

//third concept
typedef class {
    int value;

    public:
     void set_data(int i)
     {
        this->value=i;
     }
     void printvalues(){
        cout<<"value:"<<this->value<<endl;
     }

}myclass;//using typedef give a proper name

typedef class: public myclass {
  
       public:
       void display()
       {
        cout<<"hello:";
       }
}my;

typedef class: public my 
{
     public:
     void show(){
        cout<<"sir";
     }
}our;

int main()
{   //myclass  obj1,obj2;
     our o;

    o.set_data(23);
    o.printvalues();
    o.display();
    o.show();
}