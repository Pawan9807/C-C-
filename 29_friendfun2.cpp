//friend function
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        
        int numA=40;
        friend class ClassB;

    public:
        
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB=32;

    public:
       
        ClassB() : numB(1) {}
    
       int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}