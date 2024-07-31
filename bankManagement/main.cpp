#include <iostream>
using namespace std;

class bank {
    char name[100];
    char address[100];
    char accountType;
    int balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account() {
    cout << "Enter Your Full Name: ";
    cin.ignore();
    cin.getline(name, 100);

    cout << "Enter Your Address: ";
    cin.getline(address, 100);

    cout << "Enter Your Account type savings (s) or current(c): ";
    cin >> accountType;

    cout << "Enter your Depostie Amount: ";
    cin >> balance;

    cout << "Your Account is Created\n";
}

void bank::deposite_money() {
    int dAmount;
    cout << "Enter deposite Amount: ";
    cin >> dAmount;
    balance += dAmount;
    cout << "Your total balance is: " << balance << "\n";
}

void bank::display_account() {
    cout << "Your Full Name: " << name << "\n";
    cout << "Your Address: " << address << "\n";
    cout << "Your Account Type: " << accountType << "\n";
    cout << "Your Account Balance: " << balance << "\n";
}

void bank::withdraw_money() {
    int wAmount;
    cout << "Enter Your Amount to Withdraw: ";
    cin >> wAmount;
    if (wAmount <= balance) {
        balance -= wAmount;
        cout << "Balance Left: " << balance << "\n";
    } else {
        cout << "Insufficient funds\n";
    }
}

int main() {
    int ch;
    char x;
    bank obj;
    do {
        cout << "1. Open Account \n";
        cout << "2. Deposite Money \n";
        cout << "3. Withdraw Money \n";
        cout << "4. Display Account \n";
        cout << "5. Exit \n";
        cout << "Select Option from above: ";
        cin >> ch;

        switch (ch) {
            case 1:
                obj.open_account();
                break;
            case 2:
                obj.deposite_money();
                break;
            case 3:
                obj.withdraw_money();
                break;
            case 4:
                obj.display_account();
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid Option\n";
        }

        cout << "Press Y/y to Select Next Option or E/e to Exit: ";
        cin >> x;
    } while (x == 'Y' || x == 'y');

    return 0;
}
