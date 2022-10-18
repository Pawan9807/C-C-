//hybrid(virtual) inheritance means combine form of more than one inheritance

#include<iostream>
using namespace std;

class vehicle{

    public:
     vehicle()
     {
        cout<<"this is a vehicle: \n";

     }
};
class fare {

    public:
      fare()
      {
        cout<<"fare of vehicle is 23rs per hour";
      }
 };
 class car : public vehicle  {
/*
    public :
    car(){
      cout<<"vehicle is SUV XL";
    }*/
 };

class bus :public vehicle, public fare  {

};
int main()
{
    bus b;
    return 0;
}
