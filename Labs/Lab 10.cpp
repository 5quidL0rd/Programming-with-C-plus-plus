/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  4/5/2024

This lab creates various private and public functions to create a car object. 
It includes the name of the car model, the amount of gas it has in gallons, the 
total number of miles driven, and calculates the number of miles it can drive 
per gallon the car object can drive. 
************************************************************************************************************/


//Setting everything up 
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;



class Auto {
private:
    string model;           //Setting up our private variables
    int milesDriven;
    double gallonsOfGas;

public:
    void setModel(string newModel);       //Setting up all our setters and getters
    void setMilesDriven(int newMiles);
    void setGallonsOfGas(double newGallons);
    void output();
    double calculateMilesPerGallon();

    string getModel() const;
    int getMilesDriven() const;
    double getGallonsOfGas() const;
};


//Here we define all our setter and getter methods 
void Auto::setModel(string newModel) {
    model = newModel;
}

string Auto::getModel() const {
    return model;
}

void Auto::setMilesDriven(int newMiles) {
    milesDriven = newMiles;
}

int Auto::getMilesDriven() const {
    return milesDriven;
}

void Auto::setGallonsOfGas(double newGallons) {
    gallonsOfGas = newGallons;
}

double Auto::getGallonsOfGas() const {
    return gallonsOfGas;
}

double Auto::calculateMilesPerGallon() {
    if (gallonsOfGas == 0) {
        return 0; // In order to avoid division by zero.
    }
    return  milesDriven / gallonsOfGas;
}

void Auto::output() {
    cout << "Model: " << model << endl;
    cout << "Miles Driven: " << milesDriven << endl;
    cout << "Gallons of Gas: " << gallonsOfGas << endl;
    cout << "Miles per Gallon: " << fixed << setprecision(2) << calculateMilesPerGallon() << endl; //Fixed precision 
}

int main() {
    
    //Creating our car object
    Auto myCar;
    myCar.setModel("Ferrari");
    myCar.setMilesDriven(500);
    myCar.setGallonsOfGas(24);
    myCar.output();


    return 0; //End of program
}


















