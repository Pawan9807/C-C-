#include<iostream>
#include<math.h>
using namespace std;

class complex 
{
  public:
  double real,img;

  public:
    complex(double real=0, double img=0);
    complex operator+(const complex&) const;
   complex add(complex c1, complex c2);
};
// constructor
complex::complex(double r,double i)
{
    real=r;
    img=i;
}

complex complex::add(complex c1, complex c2)
{
    complex res;
    res.real=c1.real+c2.real;
    res.img=c1.img+c2.img;
    return res;
}
//operator overloaded
complex complex::operator+(const complex& c) const
{
    complex result;
    result.real=(this->real+c.real);
    result.img=(this->img+c.img);

    return result;

}


int main()
{
    complex c1(7,3);
    complex c2(4,3);

    complex c3;
    c3=c3.add(c1,c2);
    
    cout<<c3.real<<"\n";
    cout<<c3.img<<endl;
    complex x(4,6);
    complex y(4,6);
    
    complex z=x+y;//call complex::operator

    cout<<z.real<<endl;
    cout<<z.img;


}
