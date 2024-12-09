#include <iostream>

using namespace std;

int main() {
    int age;
    char movieType;
    double ticketPrice;

    cout << "enter your age: ";
    cin >> age;

    cout << "enter movie type (R for regular, 3 for 3D): ";
    cin >> movieType;

    if (age < 12) {
        ticketPrice = (movieType == 'R') ? 5 : 10; // Children's ticket pricing
    } else if (age >= 65) {
        ticketPrice = (movieType == 'R') ? 7 : 12; // Senior citizen ticket pricing
    } else {
        ticketPrice = (movieType == 'R') ? 10 : 15; // Regular adult ticket pricing
    }

    cout << "Ticket price: $" << ticketPrice << endl;

    return 0;
}