#include <iostream>
#include <string>
using namespace std;

class MotorVehicle {
public:
    MotorVehicle(string make_, string fuelType_, string color_)
        : make{make_}, fuelType{fuelType_}, color{color_} {

        }

    void setMake(string make_){
        make = make_;
    }

    string getMake(){
        return make;
    }
    
    void setFuelType(string fuelType_){
        fuelType = fuelType_;
    }

    string getFuelType(){
        return fuelType;
    }

    void setColor(string color_){
        color = color_;
    }

    string getColor(){
        return color;
    }

    void displayCarDetails(){
        cout << "Make: " << make << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
        cout << "Color: " << color << endl;
        cout << "Engine Capacity: " << engineCapacity << endl;
    }
private:
    string make;
    string fuelType;
    int yearOfManufacture = 0;
    string color;
    int engineCapacity = 0;
};