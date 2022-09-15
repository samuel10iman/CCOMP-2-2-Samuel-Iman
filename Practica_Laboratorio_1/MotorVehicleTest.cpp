#include <iostream>
#include <string>
#include "MotorVehicle.h"

using namespace std;

int main(){
    MotorVehicle motor1{"TECO", "Gasoline", "Black"};

    motor1.displayCarDetails();

    return 0;
}