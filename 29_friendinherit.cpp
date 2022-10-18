// Prog: Demonstrates how friend functions work as a bridge between the classes

#include<iostream>
using namespace std;
/*
//Friend Function to more than one classes or 
// A Function Friendly to two classes:-

class ABC;// forward declaration

class XYZ
{
	int x;
	public:
		void data(int a)
		{
			x=a;
		}
		
		friend void max(XYZ,ABC);
};


class ABC
{
	int y;
	public:
		void data(int a)
		{
			y=a;
		}	
		
	friend void max(XYZ,ABC);
};

void max(XYZ t1,ABC t2)
{
	if(t1.x>t2.y)
		cout<<t1.x;
	else
		cout<<t2.y;
}

main()
{
	ABC abc;
	XYZ xyz;
	xyz.data(20);
	abc.data(35);
	
	max(xyz,abc); //callin friend function
	return 0;
}
*/
//2nd friend

class A {
    
private:
	int a;

public:
	A() 
    {
    a = 0;
    }
	friend class B; // Friend Class
};

class B {
private:
	int b;

public:
	void showA(A& x)
	{
		// Since B is friend of A, it can access
		// private members of A
		cout << "A::a=" << x.a;
	}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}
