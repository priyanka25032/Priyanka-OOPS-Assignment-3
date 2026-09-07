//Friend Function
#include<iostream>
using namespace std;
class Employee {
    private:
    float salary;
    public:
    Employee(float s) {
        salary=s;
    }
    friend void compare(Employee e1, Employee e2);
};
void compare(Employee e1, Employee e2) {
    if(e1.salary> e2.salary)
       cout<<"Higher salary="<<e1.salary;
    else
       cout<<"Higher salary="<<e2.salary;
}
int main()  {
    Employee e1(50000);
    Employee e2(65000);
    compare(e1,e2);
    return 0;
}