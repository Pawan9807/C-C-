#include<iostream>
using namespace std;
 namespace first
 {
    int x=4;
    float y=5.23;
 }  
 namespace second
 {
       int x=4325;
       float y=32.231;
 }

int main()
{
    
  /*  using first::x;
    using second::y;

    cout<<x<<'\n';
    cout<<y<<'\n';
    cout<<first::y<<'\n';
    cout<<second::x<<'\n';
*/
/*    using namespace first;
       cout<<x<<'\n';
       cout<<y<<'\n';

       cout<<second::x<<'\n';
       cout<<second::y<<'\n';
*/
{
    using namespace first;
    cout<<x<<'\n';

}
{
    using namespace second;
    cout<<x<<'\n';
    
}
    return 0;

} 