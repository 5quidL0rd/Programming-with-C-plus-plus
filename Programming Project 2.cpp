/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  2/21/2024


The following program is for Programming Project 2. It prompts the user to choose between various vehicles
such as economy, sports, luxury, van, or truck, and then prompts the user to enter their mileage.
Once this information is accounted for, it calculates the price of the vehicle and informs the user. 
It accomplishes all of this by use of while and for loops, as well as if...else and switch statements. 

************************************************************************************************************/
#include <iostream> 
#include <cmath>
#include <stdio.h>       //Setting everything up to begin coding
using namespace std;

int main() {

//All of our necessary variables initialized here
char userClass;
int milesDriven;
string carSelected;
double calculatedPrice;
double dailyFee;
double costPerMile;
double freeMiles;

//while loop used to force user to enter an appropriate letter 
while (userClass != 'E' && userClass != 'S' && userClass != 'L' && userClass != 'V' && userClass != 'T') {
    cout << "Please enter E, S, L, V, or T to choose your vehicle class." << endl;
    cout << "Economy is E, Sport is S, Luxury is L, Van is V, and Truck is T." << endl;

    cin >> userClass;
    userClass = toupper(userClass); //If the user enters a lowercase letter we simply make it uppercase so both are accepted
}

//switch statement to determine value of variables depending on the user entry
  switch (userClass) {
        case 'E':
            cout << "You selected economy." << endl;
            carSelected = "Economy";
            dailyFee = 45.90;
            costPerMile = 0.25;
            freeMiles = 40;
            break;
        case 'S':
            cout << "You selected sport." << endl;
            carSelected = "Sport";
            dailyFee = 57.75;
            costPerMile = 0.40;
            freeMiles = 120;
            break;
        case 'L':
            cout << "You selected luxury." << endl;
            carSelected = "Luxury";
            dailyFee = 85.50;
            costPerMile = 0.35;
            freeMiles = 200;
            break;
        case 'V':
            cout << "You selected van." << endl;
            carSelected = "Van";
            dailyFee = 55.00;
            costPerMile = 0.50;
            freeMiles = 150;
            break;
        default:
            cout << "You selected truck." << endl;
            carSelected = "Truck";
            dailyFee = 55.00;
            costPerMile = 0.50;
            freeMiles = 150;
            break;
    }

 //Asks user to enter the number of miles driven
 cout << "Please enter the estimated number of miles driven. (1-812 inclusive)" << endl;
 cin >> milesDriven;

//if else statement used to force user to enter an appropriate value, if they do so we do necessary calculations
if (milesDriven > 812 || milesDriven < 1) {
    cout << "I'm sorry, but that is an invalid entry." << endl;
    cout << "Please enter another number:" << endl;
    cin >> milesDriven;
}

else { 
    milesDriven -= freeMiles;
}


//if miles driven is calculated to be under the amount of free miles it's just set to 0 since negative numbers are nonsensical here
if (milesDriven < 0) {  
    milesDriven = 0;
}
else {}





//Formula for calculating the price of the user's vehicle
calculatedPrice = dailyFee + (milesDriven * costPerMile);

//Everything is neatly printed out. 
cout << "The rental cost of a " << carSelected << " class vehicle is $" << calculatedPrice << "." << endl;


return 0;



}
    
 


























