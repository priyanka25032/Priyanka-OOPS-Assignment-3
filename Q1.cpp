// Using Friend Function
#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int marks;
    friend void display(Student s);
    public: 
    Student() {
        name="Laksh";
        marks=90;
    }   
    
};    
  
    void display(Student s) {
        cout<<"Student name:"<<s.name<<endl;
        cout<<"Student marks:"<<s.marks<<endl;
    }
int main() {
    Student s1;
    display(s1);
    return 0;
}