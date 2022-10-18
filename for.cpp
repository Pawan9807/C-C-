#include<iostream>
 using namespace std;
/*
 int main()
 {
    int i,j;
    for(i=0;i<5;i++)

{
for(j = 1; j <= i; j++)
  {     for(j=0;j<i;j++)
       {
         cout<<" * ";
         
       } 
          cout<<endl;
    }
         return 0;

 }*/
 int main()
{
int  i, j, n;
cout << "row";
cin >> n;
for(i =n; i>=1;i--)
{
for(j =1; j<= i;j++)
{
cout<< "* ";
}

cout<<"\n";
}
return 0;
}