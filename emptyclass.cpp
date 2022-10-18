// The output is not greater than 4. There is an interesting rule that says that an 
//empty base class need not be represented by a separate byte. 
//So compilers are free to make optimization in case of empty base classes. 
/*
#include <iostream>
using namespace std;


class A { //empty class
    // int b;

};

class B : public A{
	double a;
  //  int a;
};

int main()
{  B b;
	cout << sizeof(b);
	return 0;
}


*/
//problem 2:
#include <iostream>
using namespace std;

class Empty {
};

class Derived1 : public Empty {
};

class Derived2 : virtual public Empty {
};

class Derived3 : public Empty {
	char c;
};

class Derived4 : virtual public Empty {
	char c;
};

class Dummy {
	char c;
};

int main()
{
	cout << "sizeof(Empty) " << sizeof(Empty) << endl;
	cout << "sizeof(Derived1) " << sizeof(Derived1) << endl;
	cout << "sizeof(Derived2) " << sizeof(Derived2) << endl;
	cout << "sizeof(Derived3) " << sizeof(Derived3) << endl;
	cout << "sizeof(Derived4) " << sizeof(Derived4) << endl;
	cout << "sizeof(Dummy) " << sizeof(Dummy) << endl;

	return 0;
}
