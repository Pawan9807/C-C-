#include<iostream>
using namespace std;
/*
class ABC{
private:
int x,y;
public:
ABC()
{

}
ABC(int a)
{
    x=y=a;
}
ABC(int a,int b )
{
    int x=a;
    int y=b;
}
void display()
{
    cout<<"x="<<x<<"y="<<y<<endl;
}
};
int main()
{
    ABC c1;
    ABC c2(23);
    ABC c3(23,20);
    c1.display();
    c2.display();
    c3.display();
return 0;

}
*/
class Test
{
    int m,n;
    public:
    Test()
    {}
    Test(int m,int n)
    {
        this->m=n;
        this->n=n;
    }
    void print()
    {
        cout<<m<<" "<<n<<endl;

    }
};

int main()
{
    int e=2;
    Test t[e];
    for(int j=0;j<e;j++)
    {
        t[j]=Test(j,j+1);
    }
    for(int j=0; j<e;j++)
    {
        t[j].print();
    }
    return 0;
}