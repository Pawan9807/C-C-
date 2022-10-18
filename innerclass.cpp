#include <iostream>
 
using namespace std;
class student { //outer class student
        private: char name[20];
        int rollno;
        public: void student_info();
        void display();
        class date { // inner class date
                private: int date, month, year;
                public: void getdate();
                void displaydate();
        }; //end of date class(inner class)
}; //end of student class(outer class)
 
void student::student_info() {
        cout << "enter name & roll number = ";
        cin >> name >> rollno;
}
void student::display() {
        cout << "\n name = " << name << endl;
        cout << " roll number = " << rollno << endl;
}
void student::date::getdate() {
        cout << " enter date month & year = ";
        cin >> date >> month >> year;
}
void student::date::displaydate() {
        cout << "\n date = " << date;
        cout << "\n month = " << month;
        cout << "\n year = " << year;
}
 
int main() {
        student x; // create an object x of outer class  student
        student::date y; // create an object y of inner class  student 
        x.student_info();
        y.getdate();
        x.display();
        y.displaydate();
}