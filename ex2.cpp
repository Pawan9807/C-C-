#include<fstream>
#include<iostream>
using namespace std;

int main()
{
   //creation of ifstream class obj. to create and write file
    ofstream fout;
    string line;

    //by default ios::out mode automatically deletes

    fout.open("ex2file.txt");
    
    //Execute a loop if file successfully opened
    while(fout)
    {
        //read a line from standard input
        getline(cin,line);

        //press -1 to exit

      //  if(line=="-1")
        //break;

        //write line in file
        cout<<"rtw fsd" <<endl;
            
    }
   fout.close(); 
//creation of ifstream class obj. to read file
ifstream fin;
//by default open mode =ios::in mode
fin.open("ex2file.txt");

//excute loop until EOF
while (fin){

    getline(fin,line);

    //print line in console
    cout<<line<<endl;
}

fin.close();

}