// that a Local class cannot contain static data members
#include <iostream>
using namespace std;

//problem
 // a Local class cannot contain static data members
#include <iostream>
using namespace std;
  
void fun()
{
    class Test 
    {
        static int i;
    };
}
  
int main()
 { 
    return 0;
     }

     //solution of above problem 
void fun()
{
    class Test 
    {
    public:
        static void method()
        {
            cout << "Local Class method() called";
        }
    };
  
    Test::method();
}