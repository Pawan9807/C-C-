//static type casting

#include<iostream>

using namespace std;
 
 //typedef unsigned char BYTE; 
 //typedef used for BYTE only at place of int in line no.15
void f()
{
    char ch;
    int i=65;
    float f=32.3;
    double d;

    ch=static_cast<char>(i); //int to char
    d=static_cast<double>(f);//float to double
    i=static_cast<int>(ch); //char to int  
    

       cout<<i<<endl;
    cout<<ch<<endl;
    cout<<d<<endl;
 

}
int main(){
    f();
    return 0;
}