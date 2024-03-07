/******************************************************************************
 Student Name:  Blake Fowler
 Course:  C++ Programming (COP2334)
 Date:  1/12/2024


The following program is for Lab 2 and calculates the amount of profit a store makes
from a single user input. When the user inputs how many cases of soda was sold on
one day for the store, the program calculates how much revenue the store made that day,
and, taking that value, also calcualtes the profit the store will make in one year. 
It uses two basic calculations to determine these values with an algorithm constructed
in Phase 1 of the assignment with instructions on Canvas. 
*******************************************************************************/

#include <iostream>		//Setting everything up
using namespace std;

//My main statement
int
main ()
{
  //Variables for algorithm to run correctly 
  int sodaSoldOneDay;
  int sodaProfitOneDay;
  int sodaProfitOneYear;
  
  //Constants for our bottles in a case, price per bottle, and days in a year 
  const int NUMBER_BOTTLES_PER_CASE = 12;
  const int PRICE_PER_BOTTLE = 20;
  const int DAYS_IN_YEAR = 365;

  cout << "Please enter after entering each number." << endl;
  cout << "Enter number of cases sold per day." << endl; //Stores the value entered by user
  cin >> sodaSoldOneDay; //Assigns value to the correct variable 

  // Determines the profit of soda from one day depending on what the user entered 
  sodaProfitOneDay =
    (sodaSoldOneDay * NUMBER_BOTTLES_PER_CASE * PRICE_PER_BOTTLE) / 100;  //Division by 100 turns cents into dollars
   
   
  //Takes value determind above and multiplies by days in year to determine profit  
  sodaProfitOneYear = sodaProfitOneDay * DAYS_IN_YEAR;  


  //Prints out values that were determined above by our algorithm 
  cout << "The store has made: $" << sodaProfitOneDay << " per day." << endl; 
  cout << "That means the profit of one year will be: $" << sodaProfitOneYear << endl;

  cout << "Good business?!" << endl;  //Ends the program as instructed


  return 0;			//return 0
}
