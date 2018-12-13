#include <iostream>
#include <cstdlib> //srand, rand
#include <chrono>
//#include "Elevator.h"
#include <vector>
#include <cmath>
#include <string>
#include <random>

using namespace std;

int main() {
//    Elevator NE;
//    NE.run(7, 1, 5);

    int num_simulations = 10;
    int num_floors = 7;

    srand(time(NULL));
    vector<double> average_wait_time;
    int access = 1;
    int ele_floor = 1; // change this when we use dynamic elevators
    for(int b = 1; b <= num_simulations; b++){
        int g_f_n = (rand() % num_floors) + 1;
        while(g_f_n == 1){
            g_f_n = (rand() % num_floors) + 1;
        }
        cout << "g f n: " << g_f_n << endl;
        double guest_wait_time = (access * 2) + (1.5 * (2 * abs(g_f_n - ele_floor))); //1.5 = elevator travel time per floor, 2 = up then back down
        average_wait_time.push_back(guest_wait_time);

    }

    double a = 0;

    // range based loops add AT the b element, no need to mention the vector
    for(int b = 0; b < average_wait_time.size(); b++){
        cout << average_wait_time[b] << endl;
        a += average_wait_time[b];
    }
    a /= num_simulations;
    cout << "Average Guest Wait-time: " << a << endl;




    return 0;
}