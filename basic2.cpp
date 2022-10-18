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
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is:"<<age<<endl;
    }
  
    void storedata()
    {   
        //A ob;
        ofstream fout;
        fout.open("basic2.txt",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
      //  ob.getdata();
      //  fout.write(reinterpret_cast<char *> (&ob),sizeof(A));
        fout.close();
    }

 
    void viewalldata()
    {
        ifstream fin;
        fin.open("basic2.txt",ios::in|ios::binary);
      
       if(!fin)
      
      cout<<"\n file not found ";
      
       else 
       {
       fin.read((char*)this,sizeof(*this));
        
        cout<<"\t\t\t Record list   \n";
       
       //while(fin.read(reinterpret_cast<char *>))
       while(!fin.eof())
       {
       
        cout<<name<<"  "<<age <<endl;
      
        fin.read((char*)this,sizeof(*this));
       }
       
    }
    fin.close();
       
      
 } 

   void deletedata(int n)
   {
     ifstream fin;
     ofstream fout;

     fout.open("basic2.txt",ios::binary);
     if(!fin)
     {
       cout<<"file does not exist :";
       exit(0); 
     }
     else
     { 
     fout.open("temp.txt",ios::binary);
     fin.seekg(0,ios::beg);

     while(fin.read((char*)this,sizeof(*this)));   
     {
        
     } 
     fin.close();
     fout.close();
     remove("basic.txt");
     rename("temp.txt","basic.txt");
     cout<<"\n recorded deleted--";
  
   }
    
};

int main()
{
   A obj;
//    obj.getdata();
//    obj.storedata();
//    obj.viewalldata();
  int num;
  char ch;
 
   do
   {  
     cout<<" 1.  new Account" <<endl;
     cout<<" 2.  display data"<<endl;
     cout<<" 3.  delete data "<<endl;
     cin>>ch;
    
    switch(ch)
    {
        case '1':
            obj.getdata();
            obj.storedata();
      
          break;
         case '2':
             obj.viewalldata(); 
        
              break; 

        case '3':
              obj.deletedata(num);
         default: 
           cout<<"\a";     
    }
    cin.ignore();
    cin.get();

   }while(ch!='3');

 return 0;
}
