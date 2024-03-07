/******************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  3/4/2024


The following program is for Lab 7 and calculates the user's bill with a function.
The user enters a value for the number of an item purchased, the price per item, and then
the total bill is calculated including a 5% sales tax. 

*******************************************************************************/
#include <stdio.h>
#include <iostream>         //Setting everything up 
using namespace std;
#include <iomanip>

//First we declare our function final cost 
double final_cost(int number_par, double price_par);

int main()
{
    //All of our variables for the user 
    double itemPrice;
    double userBill;
    int itemNumber;
    
    
    //Prompts the user to enter the number of items
    cout << "Enter the number of items purchased: ";
    cin >> itemNumber;
    
    //Prompts the user to enter the price of the items
    cout << "Enter the price per item (in dollars): ";
    cin >> itemPrice;
    
    //The user's bill is calculated usering the function final cost (defined below)
    userBill = final_cost(itemNumber, itemPrice);
    
    
    //Everything printed out in a nicely formatted group 
     cout << itemNumber << " items at $" << itemPrice << " each.\n"
         << "The bill, including tax, is $" << fixed << setprecision(2) << userBill
         << endl;

        return 0;
}

// Function definition
double final_cost(int number_par, double price_par)  // Function heading
{ // Function body begins here
        const double ITEM_TAX_PERCENTAGE = 0.05; //5% sales tax as a constant
        double subTotal;

        subTotal = price_par * number_par;
        return (subTotal + subTotal * ITEM_TAX_PERCENTAGE); //Everything is returned 
}
















