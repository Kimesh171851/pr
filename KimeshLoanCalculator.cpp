#include <iostream>
#include <string>

using namespace std;

bool GitHubLoanCalculator(int age, double bankBalance, string crbStatus, int monthsAsCustomer) {
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
        return true;
    }
    return false;
}

int main() {
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bankBalance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter the number of months you have been a customer: ";
    cin >> monthsAsCustomer;

    if (GitHubLoanCalculator(age, bankBalance, crbStatus, monthsAsCustomer)) {
        cout << "You are qualified for a loan." << endl;
    } else {
        cout << "You are not qualified for a loan." << endl;
    }

    return 0;
}