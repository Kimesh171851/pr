#include <iostream>
#include <string>

using namespace std;

int main() {
    string bookType;
    int daysLate;
    double fine = 0.0;

    cout << "Enter the type of book (regular, children, reference): ";
    cin >> bookType;
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    if (bookType == "regular") {
        if (daysLate <= 5) {
            fine = daysLate * 0.50;
        } else if (daysLate <= 10) {
            fine = 5 * 0.50 + (daysLate - 5) * 1.00;
        } else {
            fine = 5 * 0.50 + 5 * 1.00 + (daysLate - 10) * 1.50;
        }
    } else if (bookType == "children") {
        if (daysLate <= 5) {
            fine = daysLate * 0.25;
        } else if (daysLate <= 10) {
            fine = 5 * 0.25 + (daysLate - 5) * 0.50;
        } else {
            fine = 5 * 0.25 + 5 * 0.50 + (daysLate - 10) * 1.00;
        }
    } else if (bookType == "reference") {
        fine = daysLate * 2.00;
    } else {
        cout << "Invalid book type entered." << endl;
        return 1;
    }

    cout << "The fine for returning the book late is: $" << fine << endl;

    return 0;
}