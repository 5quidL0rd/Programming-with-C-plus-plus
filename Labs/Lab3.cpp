/******************************************************************************
 Student Name:  Blake Fowler
 Course:  C++ Programming (COP2334)
 Date:  1/12/2024


The following program is for Lab 3 and prompts the user to enter the width and
length of two rectangles and outputs which rectangle has the larger area. If the 
rectangles have equal areas it will inform the user they are equal. 
*******************************************************************************/

#include <iostream>		//Setting everything up
using namespace std;

//My main statement
int
main ()
{
int firstRectangleLength = 0;       //Initialization of our 6 variables
int firstRectangleWidth = 0;
int firstArea = 0;
int secondRectangleLength = 0;
int secondRectangleWidth = 0;
int secondArea = 0;

cout << "Enter the length of the 1st rectangle:";  //Asks the user to enter the length of the 1st rectangle
cin >> firstRectangleLength;

cout << "Enter the width of the 1st rectangle:";   //ASks the user to enter the width of the 1st rectangle
cin >> firstRectangleWidth; 

cout << "Enter the length of the 2nd rectangle:"; //Asks the user to enter the length of the 2nd rectangle
cin >> secondRectangleLength;

cout << "Enter the width of the 2nd rectangle:";  //Asks the user to enter the width of the 2nd rectangle
cin >> secondRectangleWidth;

//Calculation of the areas 
firstArea = firstRectangleLength * firstRectangleWidth;

secondArea = secondRectangleLength * secondRectangleWidth; 


//Conditional statement that determines which rectangle has the greater area
if ((firstArea) > (secondArea)) { 
    cout << "The 1st rectangle has the greater area." << endl; //The first area is greater
}
else if ((firstArea) == (secondArea)) { 
    cout << "The rectangles are of equal area." << endl;  //The areas are the same
}
else {
    cout << "The 2nd rectangle has the greater area." << endl; //The first two conditions were not met, so 2nd must be larger
    
    return 0;
}
}
