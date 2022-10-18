#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class A
{
    private:
    char name[23];
    int age;
     
    public:

    void getdata(){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter age: ";
    cin.ignore();
    cin>>age;
    }
    
    void showdata () const
    {
        cout<<name<<setw(10)<<age<<endl;
    }
  
    /*  
    void viewalldata()
    {
        ifstream fin;
        fin.open("studData.txt",ios::in|ios::binary);
      
       if(!fin)

       cout<<"\n file not found ";
       
       else
       
       fin.read((char*)this,sizeof(*this));

       while(!fin.eof())
       {

        cout<<"name is "<<name<<"Age is "<<age;
        fin.read((char*)this,sizeof(*this));
       }
       fin.close();
      
    } */
    
};
  void storedata()
    {   
        A ob;
        ofstream fout;
        fout.open("studData.txt",ios::app|ios::binary);
        //fout.write((char*)this,sizeof(*this));
        ob.getdata();
        fout.write(reinterpret_cast<char *> (&ob),sizeof(A));
        fout.close();
    }

    void viewalldata()
    { // A ob;
        ifstream fin;
        char c;
        fin.open("studData.txt",ios::binary);
      
      /* if(!fin)
      {
       cout<<"\n file not found ";
       
      return;
      }
      cout<<" All Record :";
       
       //fin.read((char*)this,sizeof(*this));
       
      while( fin.read(reinterpret_cast<char *> (&ob), sizeof(A)));
      */
      while(!fin.eof())
       {
        c=fin.get();
        cout<<c;

       // ob.showdata();
      
       // fin.read((char*)this,sizeof(*this));
       }
       fin.close();
      
    }

int main()
{
 //  A obj;
//    obj.getdata();
//    obj.storedata();
//    obj.viewalldata();

   char ch;
  // int num
   do
   {  
     cout<<" 1.  new Account";
     cout<<" 2.  display data";
     cin>>ch;
    
    switch(ch)
    {
        case '1':
         //   obj.getdata();
           // obj.storedata();
           storedata();
          break;
         case '2':
             // obj.viewalldata(); 
             viewalldata(); 
              break; 
         default: cout<<"\a";     
    }
   cin.ignore();
   cin.get();
   }while(ch!='2');

 return 0;
}