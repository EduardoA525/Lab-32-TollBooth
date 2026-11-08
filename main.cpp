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



int main(){
    srand(time(0));

    deque<Car> tollLane;

    for (int i = 0; i < STARTING_GROUP; i++){
        Car tempCar;
        tollLane.push_back(tempCar);
    }



    return 0;
}
