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

int main(){
    srand(time(0));

    deque<Car> tollLane;

    for (int i = 0; i < STARTING_GROUP; i++){
        Car tempCar;
        tollLane.push_back(tempCar);
    }

    cout << "Initial Queue: " << endl;
    displayLane(tollLane);

    //for testing
    cout << "\nFirst car in line: ";
    tollLane.front().print();

    cout << "Back car in line: ";
    tollLane.back().print();


    return 0;
}

void displayLane(deque<Car> tollLane){
    if (tollLane.empty()){
        cout << "\nEmpty" << endl;
    }
    else {
        for (int i = 0; i < tollLane.size(); i++){
            cout << " ";
            tollLane[i].print();
        }
    }
}
