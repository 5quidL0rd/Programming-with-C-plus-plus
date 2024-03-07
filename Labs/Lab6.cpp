/******************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  2/16/2024


The following program is for Lab 6 and plays a dice game where the number of 7's and
11's rolled are recorded. The user is prompted to enter yes or no if they wish to continue 
the game or not. 

*******************************************************************************/
#include <iostream>
#include <ctime>   // Include for time() function
using namespace std;

int main()
{
    const int NUMBER_OF_GAMES = 100;
    int numberSevens = 0;
    int numberElevens = 0;
    char goAgain = 'y'; // Initialize to 'y' to enter the loop

    // Seed the random number generator
    srand(time(0));

    do 
    {
        numberSevens = 0; //Resets the values of sevens and elevens for each run
        numberElevens = 0;
        cout << "Starting Craps Dice Rolling Simulation\n" << endl;

        //For loop to roll the dice 100 times 
        for (int i = 0; i < NUMBER_OF_GAMES; i++)
        {
            int initialRoll = rand() % 6 + 1; // Roll between 1 and 6
            int secondRoll = rand() % 6 + 1; // Roll between 1 and 6
            int rollNumber = initialRoll + secondRoll; // Sum of the two rolls

            //Depending on what has been "rolled" tally up winning rolls
            if (rollNumber == 7)
            {
                numberSevens++;
            }
            else if (rollNumber == 11)
            {
                numberElevens++;
            }
        }
        
        //Formats output after our values have been calculated
        cout << "The player rolled " << numberSevens << " sevens and " << numberElevens << " elevens for a total of " <<
             (numberSevens + numberElevens) << " wins out of 100." << endl;

        cout << "Try again? Enter y for yes, n for no: ";
        cin >> goAgain;
        cout << endl;
        
      } while (goAgain == 'y' || goAgain == 'Y'); // Checks to see if we should keep going
    cout << "Have a nice day!"; // Our friendly farewell if user is done
    return 0;
}


