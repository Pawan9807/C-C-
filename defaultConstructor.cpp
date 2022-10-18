#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    char level;

    //default constructor
    Hero()
    {
        cout<<" constructor called "<< endl;
    }
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

    }
};

int main()
{ //obj create static
    Hero a; // default constructor called
// dynamic create object

Hero *b = new Hero;// it also called default constructor



}