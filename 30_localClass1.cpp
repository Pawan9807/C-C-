void f()
{
    class local
    {
        int f();

        int g() { return 0;} //valid ,inline member
        static int a; //error,static variable
        int b; //valid ,non-static variable
    };
}
int main(){

}