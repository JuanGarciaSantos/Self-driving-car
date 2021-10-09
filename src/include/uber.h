// AUTHOR: Juan García Santos
// DATE: 04/10/2021
// EMAIL: alu0101325583@ull.edu.es
// VERSION: 4.0
// SUBJECT: AI
// PRACTICE Nº: 1
// Compilation: make
// Execution: ./simulation
//herencia del taxi en la clase uber

#include "vehicle.h"
#pragma once
class Uber: public Vehicle
{

using Vehicle::Vehicle;

virtual void Turn(int nodo) {
    std::cout << nodo << std::endl;
}

virtual void Move(void) {
    if(direction == 1)
        row_pos += -1;
    else if(direction == 2) {
        column_pos += 1;
    }
    else if (direction == 3)
        row_pos += 1;
    else if(direction == 4) {
        column_pos += -1;
    }
    else std::cout << "aquí ha habido un error, direction = " << direction << std::endl;
}

virtual void PrintDirection(void){
    int direction = GetDirection();
    switch(direction){
        case 1: std::cout << "\u2191";
        break;

        case 2: std::cout << "\u2192";
        break;

        case 3: std::cout << "\u2193";
        break;

        case 4: std::cout << "\u2190";
        break;
    }
}

};