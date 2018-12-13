#include "Elevator.h"
#include <iostream>
#include <cstdlib> //srand, rand
#include <chrono>
#include <vector>
#include <cmath>
#include <string>
#include <random>

using namespace std;

//Elevator::Elevator(){
//
//};
// num_elevators = times this program is being run?
// 3 variables
// access * 2
// travel-time = abs(final_floor - initial floor) * 2 (up and back down), could go from 4 to 3, but only up and down to floor for now
// travel-time to guest (one-way)
// we are calculating the average travel time to get guest to their destination (basically the average of 2-7 to ground)
//      and delivering the guest (when more than one elevator can pick up a guest on the way down
//      i.e. 4 going down CAN get 3, but a elevator is on 3, so it picks them up instead, reducing travel time
