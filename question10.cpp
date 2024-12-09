#include <iostream>

using namespace std;

int main() {
    double balance, withdrawalAmount;

    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > balance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > 10000) {
        cout << "Daily withdrawal limit exceeded." << endl;
    } else {
        balance -= withdrawalAmount;
        cout << "Withdrawal successful. New balance: $" << balance << endl;
    }

    return 0;
}