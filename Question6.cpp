#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

enum TrafficLightState { RED, YELLOW, GREEN };

void displayTrafficLight(TrafficLightState state) {
    switch (state) {
        case RED:
            cout << "Red Light" << endl;
            break;
        case YELLOW:
            cout << "Yellow Light" << endl;
            break;
        case GREEN:
            cout << "Green Light" << endl;
            break;
    }
}

int main() {
    TrafficLightState state = RED;
    while (true) {
        displayTrafficLight(state);
        switch (state) {
            case RED:
                this_thread::sleep_for(chrono::seconds(2));
                state = GREEN;
                break;
            case YELLOW:
                this_thread::sleep_for(chrono::seconds(2));
                state = RED;
                break;
            case GREEN:
                this_thread::sleep_for(chrono::seconds(2));
                state = YELLOW;
                break;
        }
    }
    return 0;
}