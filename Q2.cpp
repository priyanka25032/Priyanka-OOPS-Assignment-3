//Use of Friend Function
#include<iostream>
using namespace std;
class Number {
    private:
    int a,b;
    public:
    Number() {
        a=20;
        b=30;
    }
    friend void display(Number n);
};
void display(Number n) {
    cout<<"a="<<n.a<<endl;
    cout<<"b="<<n.b<<endl;
    cout<<"Sum="<<n.a+n.b<<endl;
}
int main() {
    Number n;
    display(n);
    return 0;
}