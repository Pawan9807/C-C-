// cin AND cout first store in buffer then it call from main54

#include<iostream>
//#include<vector.h>
#include<climits>

using namespace std;

int main()
{
    int a;
    char str[80];
    cin>>a;


    //descard the input buffer
     cin.sync();

      //get input from user

        cin.getline(str,80);
    cout<<a<<endl;
    cout<<str<<endl;
    return 0;
}