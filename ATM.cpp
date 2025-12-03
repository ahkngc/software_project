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