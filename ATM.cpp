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