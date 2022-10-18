#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
using namespace std;


class item
{
    private:
     int code;
     char name[23];
     int qty;

     public:

     void get_item(void);
     void put_item(void);
     int get_code()
     {
        return code;
     }
     void update_qty(int num){
        qty=qty-num;
     }


};

void item:: get_item(void)
{
    cout<<"Enter item code: ";
    cin>>code;
    fflush(stdin);
    cout<<"Enter Item name: ";
    cin>>name;
    cout<<"Enter Qty :";
    cin>>qty;

}

void item:: put_item(void)
{

    cout<<setw(6)<<code<<setw(15)<<name<<setw(6)<<qty<<endl;

}

void add_record(void);
void show_record(void);
void show_Allrecord(void);
void delete_record(void);
void modify_record(void);

item it;
fstream file; //global 

int main()
{
    int option;
    while(1)
    {
        system("cls");

        cout<<"***** MENU ****"<<endl;
        cout<<"1. Add new record "<<endl;
        cout<<"2. Display All records"<<endl;
        cout<<"3. Display Particular Record"<<endl;
        cout<<"4. Delete Record "<<endl;
        cout<<"5. Update/Modify Record "<<endl;
        cout<<"6. Exit "<<endl;
        cout<<"enter option no. :";
        cin>>option;

        switch(option)
        {
            case 1:{
                add_record();
                getch();
                break;

            }
            case 2:{
                cout<<setw(6)<<"code"<<setw(15)<<"Name"<<setw(6)<<"qty"<<endl;
                show_Allrecord();
                     
                getch();
                break;

            }
            case 3:{
                show_record();
                getch();
                break;

            }
            case 4:{
                delete_record();
                getch();
                break;

            }
            case 5:{
                modify_record();
                getch();
                break;

            }
            case 6:{
                exit(0);
                break;

            }
            default: 
            {cout<<"Incorrect option: ";
              getch();
              break;
            } 
        }
    }
    return 0;
}

void add_record()
{
    char ch='y';

    file.open("stock.dat",ios::app|ios::binary);
    while(ch=='y'||ch=='Y')
    {
        it.get_item();
    

    //write object into file
    file.write((char*)&it,sizeof(it));
    cout<<"Add more records...(y/n)?";
    cin>>ch;
   }
   file.close();
}
//function to display All Records from file

void show_Allrecord(){

    file.open("stock.dat",ios::in|ios::binary);
    if(!file)
    {
      cout<<"file not found";
      exit(0);
    }
    else
    {
        //read record from a file into object
        file.read((char*)&it,sizeof(it));
        while(!file.eof())  
        {
            it.put_item();  //display object
            file.read((char*)&it,sizeof(it));

        }
    }
    file.close();  

}

void show_record(void)
{
    int no, flag=0;
    file.open("stock.dat",ios::in|ios::binary);
    if(!file)
    {
        cout<<"file not found";
        exit(0);
    }
    else
    {
        cout<<"Enter item code to search: ";
        cin>>no;
        //read record from a file into object
        file.read((char*)&it,sizeof(it));
        while(!file.eof())
        {
            if(no==it.get_code())
            {
                flag=1;
                cout<<setw(6)<<"code"<<setw(15)<<"Name"<<setw(6)<<"qty"<<endl;
                it.put_item();
                break;
            }
            file.read((char*)&it,sizeof(it));
        }
        if(flag==0)
        {
            cout<<"Item not found..\n";
        }
    }
    file.close();
}

void delete_record()
{
    int no;
    cout<<"enter Item code to delete  :";
    cin>>no;
    ofstream file2;

    file2.open("new.dat",ios::out|ios::binary);
    //
    file.open("stock.dat",ios::in|ios::binary);
    if(!file)
    {
        cout<<"file not found: ";
        exit(0);
    }
    else{
        file.read((char*)&it,sizeof(it));

        while(!file.eof())

        {
            if(no!=it.get_code())
            {   //write code into new.data file
                file2.write((char*)&it,sizeof(it));
            }
            //read record from stock.dat file into object
            file.read((char*)&it,sizeof(it));
        } 
    }

     file2.close();
     file.close();
     remove("stock.dat");
     rename("new.dat","stock.dat");

}


void modify_record()
{

    int no,num;
    cout<<"enter item to modify:";
    cin>>no;
    cout<<"Enter no. of items issued:";
    cin>>num;
    file.open("stock.dat",ios::in|ios::out|ios::binary);

    if(!file)
    {
        cout<<"not found: ";
        exit(0);
    }
    while(file.read((char*)&it,sizeof(it)))
    {
        if(it.get_code()==no)
        {
            it.update_qty(num);
            //move put pointer to current position -1
            int pos=sizeof(it);
            file.seekp(-pos,ios::cur);
            //write object to stock.dat file
            file.write((char*)&it,sizeof(it));

        }
    }
    file.close();
}

