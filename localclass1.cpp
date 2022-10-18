/ C++ program with compilation error to demonstrate that
// all the methods of Local classes must be defined inside
// the class only
#include <iostream>
using namespace std;
  
void fun()
{
    class Test // local to fun
    {
    public:
        void method();
       // { cout << "Local Class method()"; } //not error
    };
  
    // Error as the method is defined outside the local
    // class
    void Test::method() { cout << "Local Class method()"; }
}
  
int main() { return 0; }