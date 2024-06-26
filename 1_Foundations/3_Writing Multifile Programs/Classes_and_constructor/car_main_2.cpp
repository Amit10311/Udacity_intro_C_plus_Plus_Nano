#include <iostream>
#include <string>
#include <vector>
#include "car.h"
using std::string;
using std::cout;
using std::vector;

int main() {
    // Create an empty vector of pointers to Cars 
    // and a null pointer to a car.
    vector<Car*> car_vect;
    Car* cp = nullptr;
    
    // The vector of colors for the cars:
    vector<string> colors {"red", "blue", "green"};

    // Create 100 cars with different colors and 
    // push pointers to each of those cars into the vector.
    for (int i=0; i < 100; i++) {;
        cp = new Car(colors[i%3], i+1);
        car_vect.push_back(cp);
    }

    // Move each car forward by 1.
    for (Car* cp: car_vect) {
        // Simultaneously dereference the pointer and 
        // access IncrementDistance().
        cp->IncrementDistance();
    }

    // Print data about each car.
    for (Car* cp: car_vect) {
        cp->PrintCarData();
    }
}



/* Scaling Up

The distance that the red car 1 has traveled is: 1
The distance that the blue car 2 has traveled is: 1
The distance that the green car 3 has traveled is: 1
The distance that the red car 4 has traveled is: 1
--------------------------------------------
----------------------------------------------
-----------------------------------------------
The distance that the red car 97 has traveled is: 1
The distance that the blue car 98 has traveled is: 1
The distance that the green car 99 has traveled is: 1
The distance that the red car 100 has traveled is: 1

  */ 

