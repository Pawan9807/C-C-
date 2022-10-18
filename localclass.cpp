// A program without any compilation error to demonstrate
// that a local class type name can only be used
// in the enclosing function
  
#include <iostream>
using namespace std;
  
void fun()
{
    // Local class
    class Test {
        // Body
    };
  
    Test t; // Fine
    Test* tp; // Fine
}
  
int main()
{
    Test t; // Error
    Test* tp; // Error
    return 0;
}