#include<iostream>
using namespace std;
/*
class Hero{
  
    private:
    int health;

    public:
    char level;

    void print(){

        cout<< level << endl;
    }
//getter means search or fetch
    int gethealth(){
        return health;
    }

    char getlevel(){
   
      return level;
    }
//if want to do condition /modify like password in SETTER
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch)
    { 
        level=ch;

    }
};
int main()
{
   Hero ramesh;
    cout<< "ramesh health is " <<ramesh.gethealth()<<endl;
    
    //use setter
    ramesh.sethealth(34);
    ramesh.level='A';
     //  cout<<"health is:"<<ramesh.health <<endl; //health is private
       cout<<"health is:"<<ramesh.gethealth() <<endl; 
       cout<<"level is:" <<ramesh.level << endl;

       return 0;
}

*/
class Hero{
  
    private:
    int health;

    public:
    char level;

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
{
      //object create using static allocation
   Hero a;
 //setter 
  a.sethealth(34);
  a.setlevel('D');
   
    cout<<"level is: "<<a.level << endl;
    cout<<"health is "<<a.gethealth() << endl;
   //objectcreate using dynamic allocation
   // allocate meomory in heap

   Hero *b= new Hero;
// we write (*b)getHealth or b->getHealth()
    
    //setter 
    b->sethealth(24);
    b->setlevel('E');
   

    cout<<"level is: "<<(*b).level << endl;
    cout<<"health is "<<(*b).gethealth() << endl;

    cout<< " level is " <<b->level << endl;
    cout<<" health is " <<b->gethealth() <<endl;
   

       return 0;
}