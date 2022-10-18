#include<iostream>
using namespace std;

class encap
{
    private:
        int x;
   
    public:

    void set(int a)
      {
        x=a;
      } 
   
     int get()
      {

        return x;
      }
       
};

int main(){

    encap obj;
    
    obj.set(5);
   
    cout<<obj.get();

    return 0;

}