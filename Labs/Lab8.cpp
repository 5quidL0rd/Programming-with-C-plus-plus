/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  3/7/2024

This lab calculates a user waist size, hat size, and jacket size depending on what they enter. It uses three 
functions to accomplish this. 

************************************************************************************************************/
#include <iostream> 
#include <cmath>
#include <stdio.h>       //Setting everything up to begin coding
using namespace std;



//Function for calculating a hat size 
double calculateHatSize(double userHeight, double userWeight) {
   double userHatSize = (userWeight / userHeight) * 2.9; //simply divide by variables and multiply by 2.9
   return userHatSize;
   }
   
//Function for calculating jacket size
double calculateJacketSize(double userHeight, double userWeight, double userAge) {
   double userJacketSize = (userHeight * userWeight) / 288; //Similar to above
   if (userAge > 39) {  
       for (int i = 40; i <= userAge; i++) {
           if (i % 10 == 0) {                   //If the user age is greater than 39 then for every 10 years we increase by 1/8 an inch
           userJacketSize += 0.125;
       }
       else {
       }
       }
       
   }
   return userJacketSize;
}


//Function for calculating waist size
double calculateWaistSize(double userWeight, double userAge) {
    double userWaistSize = (userWeight / 5.7); 
    if (userAge >= 28) {
        for (int i = 30; i <= userAge; i++) {
            if (i % 2 == 0) {                   //If the user is older than 28 then for every 2 years we add 1/10 an inch
                userWaistSize += 0.1;
            }
            else {}
            }
        }
    
    return userWaistSize;
    
}



int main() {
    
    //Setting everything up 
    double userHeight;
    double userWeight;
    double userAge;
    string userContinues = "Y";
    double userHatSize;

    //Repeats until user enters something other than Y or y
    while (userContinues == "Y" || userContinues == "y") {
        cout << "Give me your height in inches, weight in pounds, and age in years " <<
        "\nand I will give you your hat size, jacket size(inches at chest) " <<
        "\nand your waist size in inches.: ";
        cin >> userHeight;
        cin >> userWeight;
        cin >> userAge;                 //Obtains user info 
        cout << userHeight << " ";
        cout << userWeight << " ";
        cout << userAge << " ";
        
        //Set our precision so we don't get massive numbers
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed);
        cout.precision(2);

        
        
        //Sends info to our functions above and prints out what is calculated
        cout << "hat size = " << calculateHatSize(userHeight, userWeight) << endl;

        cout << "jacket size = "  << calculateJacketSize(userHeight, userWeight, userAge)
        << endl;
        
        
        cout << "waist size = "  << calculateWaistSize(userWeight, userAge) << endl;
        
        
        cout << "Enter Y or y to repeat, any other character ends." << endl;
        cin >> userContinues;
        
        
}
}





































