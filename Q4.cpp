//Class with static data member
#include<iostream>
using namespace std;
class Student {
    public:
    static int count;
    Student() {
        count++;
    }
};
int Student::count=0;
int main() {
    Student s1;
    Student s2;
    Student s3;
    cout<<"Total objects="<<Student::count<<endl;
    return 0;
}