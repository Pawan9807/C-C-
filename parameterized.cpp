#include<iostream>
using namespace std;

class Hero{
  
   private:
    int health;

    public:
    char level;

    
    Hero( int health)
    {   
         //this means it store address of current object
        
        cout<<"this-> "<<this<< endl;
        this->health=health;
       // cout<<" constructor called "<< endl;
    }
    /*
    void print(){

        cout<< level << endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
   
      return level;
    }

    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch)
    { 
        level=ch;

    }*/
};

int main()
{ //static
    Hero a(23); //current object
    cout<< "Address of a" << &a << endl;


//dynamic 
Hero *b= new Hero(283);



}