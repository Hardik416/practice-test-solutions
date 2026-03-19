#include <iostream>
using namespace std;

class Customer{
    public:
    string name, phone_no;
    Customer(){}
    Customer(string n, string p) : name(n), phone_no(p){}
};
class Depositor : public Customer{
    public:
    int acc_no, balance;
    Depositor(){}
    Depositor(string n, string p, int a, int b) : acc_no(a), balance(b), Customer(n, p){}
};
class Borrower : public Depositor{
    public:
    int loan_no, loan_amt;
    Borrower(string n, string p, int a, int b, int l, int la) : loan_no(l), loan_amt(la), Depositor(n, p, a, b){}
    void display(){
        cout << "Customer Details\n";
        cout << name << "\n" << phone_no << "\n" << acc_no << "\n" << balance <<"\n"<<loan_no<<"\n"<<loan_amt<<"\n";
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, l, la;
        string n, p;
        cin >> n >> p >> a >> b >> l >> la;
        Borrower obj(n, p, a ,b, l, la);
        obj.display();
    }
}