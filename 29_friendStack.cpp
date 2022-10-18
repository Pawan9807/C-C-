#include <iostream>
using namespace std;

class Friend;

class Parent
{
    friend class Friend;
private:
    virtual void nameYourself()
     {
         std::cout << "Parent" <<endl;
     }
};

class Child : public Parent
{
private:
    virtual void nameYourself() { std::cout << "Child" << std::endl; }
};

class Friend
{
public:
    void foo(Parent *p) { p->nameYourself(); }
};

int main()
{
    Parent p;
    Child c;
    Friend f;
    f.foo(&p);
    f.foo(&c);
    return 0;
}