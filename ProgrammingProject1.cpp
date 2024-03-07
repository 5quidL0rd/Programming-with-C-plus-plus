/******************************************************************************

 Student Name:  Blake Fowler
 Course:  C++ Programming (COP2334)
 Date:  1/8/2024


The following program is for Programming Project 1 and determins the number of roots
and, if there are roots, the value of the roots for three numbers listed by a user.
It accomplishes this by using two formulas: the discriminant and the quadratic 
equation. It uses basic if-else statements when using these two formulas, and outputs
the correct values to the user in a friendly way. 

*******************************************************************************/
#include <iostream>
using namespace std;
#include <stdio.h>    //Setting everything up 
#include <cmath>



int main() {
  
  double a = 0.0;  //Setting up and initializing our values
  double b = 0.0;
  double c = 0.0;
  
  //Politely asks the user to enter their data
  cout << "Please enter an integer value for a:" << endl;
  cout << "->";
  cin >> a;
  
  cout << "Please enter an integer value for b:" << endl;
  cout << "->";
  cin >> b;
  
  cout << "Please enter an integer value for c:" << endl;
  cout << "->";
  cin >> c;
  
  //Discriminant is determined
  double discriminantFormula = (b * b) - (4 * a * c);
  
  //The two roots are calculated for the given discriminant using quadratic formula
  double root1 = (-b + sqrt(discriminantFormula)) / (2 * a);
  double root2 = (-b - sqrt(discriminantFormula)) / (2 * a);
  
  
  //Basic if-else statements to determine the roots of the equation (if there are any) 
  if (discriminantFormula > 0.0) {
      cout << "There are two real roots." << endl;
      
      //Nested if statement to determine if quadratic formula works (if a = 0 it doesn't)
      if ((a != 0) || (a != 0.0)) {   
      cout << "The roots are " << root1 << " and " << root2 << endl;
      }
      else { 
          cout << "The roots cannot be computed by the quadratic formula." << endl;
      }
  }
  
  //Main if loop resumed
  else if (discriminantFormula == 0.0) {
      cout << "There is one real root." << endl;
      cout << "The root is " << root1 << endl;
      
} 
  else if (discriminantFormula < 0.0)  {
    cout << "There are no real roots." << endl;
}
  else  {
    cout << "The roots could not be calculated by the quadratic formula." << endl;
}

cout << "Have a nice day!" << endl;
  
  }
  
  //This concludes the program 
 
      
 
  






