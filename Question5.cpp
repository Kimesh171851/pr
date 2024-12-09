#include <iostream>
#include <cmath>

using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. calculate the area of a circle" << endl;
    cout << "2. calculate the area of a rectangle" << endl;
    cout << "3. calculate the area of a triangle" << endl;
    cout << "4. quit" << endl;
    cout << "enter your choice: ";
}

int main() {
    int choice;
    double radius, length, width, base, height, area;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius;
                cout << "the area of the circle is: " << area << endl;
                break;
            case 2:
                cout << "enter the length and width of the rectangle: ";
                cin >> length >> width;
                area = length * width;
                cout << "the area of the rectangle is: " << area << endl;
                break;
            case 3:
                cout << "enter the base and height of the triangle: ";
                cin >> base >> height;
                area = 0.5 * base * height;
                cout << "the area of the triangle is: " << area << endl;
                break;
            case 4:
                cout << "quitting the program." << endl;
                return 0;
            default:
                cout << "invalid choice. Please try again." << endl;
        }
    }

    return 0;
}