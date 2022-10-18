#include<iostream>
using namespace std;

struct mystruct{
    
    int x,y;
    char c;
    bool b;
};

int main()
{
  mystruct s;

  s.x=5;
  s.y=10; 
  s.c='a';
  s.b=true;

  //data type must be same during casting as that of original

  //converting the pointer of 's' to pointer of int type in 'p'

  int* p=reinterpret_cast<int*>(&s);
  cout<<sizeof(s)<<endl;

  //printing the value currently pointed by *p
  cout<<*p<<endl;
  
   *p++;

  cout<<*p<<endl;
  *p++;
  

  //cout<<*p;

   char* ch=reinterpret_cast<char*>(p);
  //printing char. value pointed by (*ch)

  cout<<*ch<<endl;
  ch++;

/* since, (*ch) now points to boolean value,
    so it is required to access the value using
    same type conversion.so, we have used
    data type of *n to be bool. */
  //bool* n=reinterpret_cast<bool*>(ch);
  //cout<<*n<<endl;


  //(*n)++;
 // cout<<++(*n)<<endl;

  //we can also use this line of code to print
  //the value pointed by (*ch)
   cout<<*(reinterpret_cast<bool*>(ch));
  return 0;
}