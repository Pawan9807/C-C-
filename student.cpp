//write a single file handling program in c++ to reading and writing data on a file.
 
#include<iostream>
#include<fstream>
   
using namespace std;
main()
{
      int rno,fee;
      char name[50];
   
      cout<<"Enter the Roll Number:";
      cin>>rno;
       
      cout<<"\nEnter the Name:";
      cin>>name;
       
      cout<<"\nEnter the Fee:";
      cin>>fee;
   
      ofstream fout("stud2.txt");
   
      fout<<rno<<"\t"<<name<<"\t"<<fee;   //write data to the file student
   
      fout.close();
   

   //below this used for only read data from stud2.txt file
      ifstream fin("stud2.txt");
   
      fin>>rno>>name>>fee;   //read data from the file student
   
      fin.close();
   
      cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
   
    return 0;   
}