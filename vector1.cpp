#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> a;

for(int i=1;i<=10;i++)
a.push_back(i*10);
cout<<"\nreference operator [g]:a[2]=" <<a[2];
cout<<"\n at :a.at(4)="<<a.at(4);
cout<<"\n at :a.front(4)="<<a.front();
cout<<"\n at :a.back(4)="<<a.back();

int* pos=a.data();

cout<<"\n the first element is "<< *pos;
}