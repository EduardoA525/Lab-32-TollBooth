//Eduardo Avila
//COMSC - 210 - 5293
//Lab 32 - Toll Booth

#include <iostream>
#include "Car.h"
#include <deque>
#include <ctime>
#include <cstdlib>
using namespace std;

const int STARTING_GROUP = 2;

void displayLane(deque<Car> tollLane);
void startTollSim(deque<Car>& tollLane);

int main(){
    srand(time(0));

    deque<Car> tollLane;

    for (int i = 0; i < STARTING_GROUP; i++){
        Car tempCar;
        tollLane.push_back(tempCar);
    }

    cout << "Initial Queue: " << endl;
    displayLane(tollLane);

    startTollSim(tollLane);

    return 0;
}

void displayLane(deque<Car> tollLane){
    if (tollLane.empty()){
        cout << " Empty" << endl;
    }
    else {
        for (int i = 0; i < tollLane.size(); i++){
            cout << " ";
            tollLane[i].print();
        }
    }
}

void startTollSim(deque<Car>& tollLane) {
    int round = 0;
    const int leavePercent = 55;

    while (!tollLane.empty()) {
        round++;

        int randNum = rand() % 100;

        if (randNum < leavePercent) {
            Car temp = tollLane.front();

            cout << "Time: " << round << " Operation: Car paid: ";
            temp.print();

            tollLane.pop_front();
        }
        else {
            Car temp;

            tollLane.push_back(temp);

            cout << "Time: " << round << " Operation: Joined Lane: ";
            temp.print();
        }

        cout << "Queue: " << endl;
        displayLane(tollLane);

    }
}