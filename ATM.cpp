#include <iostream>
#include <string>
using namespace std;



class ATM {
private:
    string correctPIN;
    double balance;

public:
    ATM(string pin, double initialBalance) {
        correctPIN = pin;
        balance = initialBalance;
    }


bool login() {
        string enteredPIN;
        int attempts = 3;
        while (attempts > 0) {
            cout << "Enter your PIN: ";
            cin >> enteredPIN;

            if (enteredPIN == correctPIN) {
                cout << "\nLogin successful!\n";
                return true;
            } else {
                attempts--;
                cout << "Incorrect PIN. Attempts left: " << attempts << "\n";
            }
        }
        cout << "You have entered wrong PIN 3 times. Exiting...\n";
        return false;
    }




void showMenu() {
        cout << "\n====================\n";
        cout << "        ATM MENU\n";
        cout << "====================\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "====================\n";
    }

void checkBalance() {
        cout << "\nYour current balance is: $" << balance << "\n";
        cout << "Press enter to continue...";
        cin.ignore();
        cin.get();
    }



void deposit() {
        double amount;
        cout << "\nEnter amount to deposit: $";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful!\n";
            cout << "New balance: $" << balance << "\n";
        } else {
            cout << "Invalid amount. Deposit canceled.\n";
        }
        cout << "Press enter to continue...";
        cin.ignore();
        cin.get();
    }



    void withdraw() {
        double amount;
        cout << "\nEnter amount to withdraw: $";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount. Withdrawal canceled.\n";
        } else if (amount > balance) {
            cout << "Insufficient funds. Withdrawal canceled.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful!\n";
            cout << "Remaining balance: $" << balance << "\n";
        }
        cout << "Press enter to continue...";
        cin.ignore();
        cin.get();
    }


void run() {
        if (!login()) {
            return;
        }

        int choice = 0;
        do {
            showMenu();
            cout << "Enter your choice (1-4): ";
            cin >> choice;

            while (cin.fail()) {  // التحقق من إدخال رقم صحيح
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Enter a number (1-4): ";
                cin >> choice;
            }

            switch(choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    cout << "\nThank you for using the ATM. Goodbye!\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while(choice != 4);
    }


};








int main() {

string userPIN;
    double initialBalance;

    cout << "Welcome to the ATM!\n";
    cout << "Set your PIN: ";
    cin >> userPIN;

    cout << "Set your initial balance: $";
    cin >> initialBalance;


    return 0;
}