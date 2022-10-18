/*A default argument is a value provided in a function declaration that is automatically assigned by the compiler 
if the calling function doesn’t provide a value for the argument. 
In case any value is passed, the default value is overridden. 
*/
/*
// CPP Program to demonstrate Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
	return (x + y + z + w);
}

int main()
{
	
	cout << sum(10, 15) << endl;

	
	cout << sum(10, 15, 25) << endl;

	
	cout << sum(10, 15, 25, 30) << endl;
	return 0;
}
*/
//problem 
#include <iostream>
void init(int a=1, int b=2, int c=3);

int main()
{
	init();
	return 0;
}
//void init(int a=1, int b=2, int c=3)  //default cann't used in definition but used in declaration only
void init(int a, int b, int c)
{
	std::cout << a << ' ' << b << ' ' << c;
}

