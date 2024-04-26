/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  4/19/2024

This is Lab 12. In this lab there is an array of temperatures 7 elements long. 
Random values between 1 and 100 are determined using <ctime> to populate the array.
Then, the highest and lowest values of the array are calculated and removed when
determining the average value of the array. Once this is done, each temperature is
calculated as either being above average or below average. 
************************************************************************************************************/

//Setting everything up 
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
#include <iostream>
#include <ctime>

int main() {
    
    //Using time to generate our random values
    srand(time(0)); 
        
    const int NUM_ELEMENTS = 7;   // 7 elements
    int tempArray[NUM_ELEMENTS];
    int arraySum = 0;
    double averageValue = 0;

   
   //Declaring our variables to hunt down the lowest and highest elements
  int lowestElement = tempArray[0];
  
  int highestElement = lowestElement;
  
  int currentElementValue;
   
   
   //Using time to generate our random values
    srand(time(0)); 
  
  
   //Generating all of our random values between 1 and 100
   for (int i = 0; i < NUM_ELEMENTS; i++)
   {
      tempArray[i] = rand() % 100 + 1;
      
      
   }

  
  //For loop with if statements to determine the highest and lowest values in array
  for (int i = 0; i < NUM_ELEMENTS; i++) {
      currentElementValue = tempArray[i];
      if (currentElementValue < lowestElement) {
          lowestElement = currentElementValue;
      }
      
      if (currentElementValue > highestElement) {
          highestElement = currentElementValue;
      }
      
  }
  
  //Adding up the sum 
  for (int i = 0; i < NUM_ELEMENTS; i++) {
      currentElementValue = tempArray[i];
      arraySum += currentElementValue;
  }
  
  
  //Calculating average excluding highest and lowest temperatures and converting to doubles
  averageValue = ((static_cast<double>(arraySum - lowestElement - highestElement)) / (NUM_ELEMENTS - 2));
  
  
  
  cout << "The average temperature is " << averageValue << endl;
  
  //Iterating through the array 
  for (int i = 0; i < NUM_ELEMENTS; i++) {
      
      currentElementValue = tempArray[i];
      
      //And printing everything out describing where it falls according to the average
      if (currentElementValue < averageValue) {
          
          cout << "Temperature " << i+1 << currentElementValue << " is below average" << endl;
          
      }
      
      else if (currentElementValue > averageValue) {
          cout << "Temperature " << i+1 << currentElementValue << " is above average" << endl;
      }
      
      else {
          cout << "Temperature" << i+1 << currentElementValue << " is equal to the average" << endl;
      }
      
      
      
  }
 
    return 0;
}



















