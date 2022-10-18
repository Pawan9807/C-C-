#include<iostream>
using namespace std;
/*
// public
class first
{
   private:
      int a=20;
   protected:
      int b=21;
   public:
      int c=21;

    int get_private()
    {
      return a;
    }
};

class second: public first{ //derived class

  public:
    int get_protected()
    {
      return b;
    }
      
};

int main()
{
   second obj;
   cout<<"private: "<<obj.get_private();
   cout<<endl;
   cout<<"protected: "<<obj.get_protected();
   cout<<endl;
   cout<<"public: "<<obj.c;

}*/

// protected
/*
class first
{
   private:
      int a=20;
   protected:
      int b=21;
   public:
      int c=21;

    int get_private()
    {
      return a;
    }
    
};

class second: protected first{

  public:
 int get_public()
   {
      return b;
   }
    int get_protected()
    {
      return b;
    }
      
};

int main()
{
   second obj;
  // cout<<"private: "<<obj.get_private();
   cout<<endl;
   cout<<"protected: "<<obj.get_protected();
   cout<<endl;
   cout<<"public: "<<obj.get_public();

}

*/
//private

class first
{
   private:
      int a=20;
   protected:
      int b=21;
   public:
      int c=21;

    int get_private()
    {
      return a;
    }
};

class second: private first{

  public:
   /*int get_public()
   {
      return c;
   } */
    int get_protected()
    {
      return b;
    }
      
};

int main()
{
   second obj;
  // cout<<"private: "<<obj.get_private();
   cout<<endl;
   cout<<"protected: "<<obj.get_protected();
   cout<<endl;
   cout<<"public: "<<obj.b;
 //   cout<<"public: "<<obj.get_public();

}