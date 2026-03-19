/*
Q4: Smart Payment System Using Polymorphism
- Abstract Base: Payment (transactionID + pure virtual processPayment())
- CreditCard: last 4 digits
- DigitalWallet: wallet provider
- UPI: UPI ID
Input: N, then "CreditCard/DigitalWallet/UPI txnID info"
Note: "Digital Wallet" can be two words - handle both cases
*/

#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class Payment {
protected:
    string transactionID;
public:
    Payment(string id) : transactionID(id) {}
    virtual void processPayment() = 0;
    virtual ~Payment() {}
};

// Derived: CreditCard
class CreditCard : public Payment {
    string lastFour;
public:
    CreditCard(string id, string digits) : Payment(id), lastFour(digits) {}
    void processPayment() {
        cout << "Payment Details:" << endl;
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Credit Card Last 4 Digits: " << lastFour << endl;
    }
};

// Derived: DigitalWallet
class DigitalWallet : public Payment {
    string provider;
public:
    DigitalWallet(string id, string p) : Payment(id), provider(p) {}
    void processPayment() {
        cout << "Payment Details:" << endl;
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Digital Wallet Provider: " << provider << endl;
    }
};

// Derived: UPI
class UPI : public Payment {
    string upiID;
public:
    UPI(string id, string uid) : Payment(id), upiID(uid) {}
    void processPayment() {
        cout << "Payment Details:" << endl;
        cout << "Transaction ID: " << transactionID << endl;
        cout << "UPI ID: " << upiID << endl;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    Payment* payments[105];

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        // Parse manually
        // Find first space
        int p1 = 0;
        while (p1 < (int)line.size() && line[p1] != ' ') p1++;
        string type = line.substr(0, p1);

        string rest = line.substr(p1 + 1);

        // Handle "Digital Wallet" as two words
        if (type == "Digital") {
            // next word is "Wallet"
            int p2 = 0;
            while (p2 < (int)rest.size() && rest[p2] != ' ') p2++;
            // skip "Wallet "
            rest = rest.substr(p2 + 1);
            type = "DigitalWallet";
        }

        // Now rest = "txnID info"
        int p2 = 0;
        while (p2 < (int)rest.size() && rest[p2] != ' ') p2++;
        string txnID = rest.substr(0, p2);
        string info = rest.substr(p2 + 1);

        if (type == "CreditCard") {
            payments[i] = new CreditCard(txnID, info);
        } else if (type == "DigitalWallet") {
            payments[i] = new DigitalWallet(txnID, info);
        } else { // UPI
            payments[i] = new UPI(txnID, info);
        }
    }

    for (int i = 0; i < n; i++) {
        payments[i]->processPayment();
        delete payments[i];
    }

    return 0;
}
