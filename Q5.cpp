//Implementation of constructor, friend function and static function
#include<iostream>
using namespace std;
class Bankaccount {
    private:
    int accountno;
    float balance;
    static int totalaccounts;
    public:
    Bankaccount (int acc, float bal) {
        accountno=acc;
        balance=bal;
        totalaccounts++;
    }
    friend void displayaccount(Bankaccount b);
    static void displaytotal() {
        cout<<"total account="<<totalaccounts<<endl;
    }
};
int Bankaccount::totalaccounts=0;
void displayaccount(Bankaccount b) {
    cout<<"Account Number:"<<b.accountno<<endl;
    cout<<"Balance:"<<b.balance<<endl;
}
int main() {
    Bankaccount b1(101,5000);
    Bankaccount b2(102,6000);
    Bankaccount b3(103,7000);
    displayaccount(b1);
    displayaccount(b2);
    displayaccount(b3);
    Bankaccount::displaytotal();
    return 0;
}