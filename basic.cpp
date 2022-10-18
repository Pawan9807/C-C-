#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//write in file 
  /*  ofstream fout;
    fout.open("basic.txt");

    fout<<"Hello dost:";
    */

// read data from file
    ifstream fin;
    char ch;
    fin.open("basic.txt");
    
   // fin>>ch;
  //  cout<<ch;
  //read data with space
  while(!fin.eof())
  {
    ch=fin.get();
    cout<<ch;
  }
  
   }