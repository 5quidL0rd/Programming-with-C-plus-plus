/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  3/14/2024

This lab takes the input file name and output file name from the user. 
Nothing is outputted to the string, but it does affect the two files "output.dat" 
as well as "data.dat." For the even numbers, it writes the numbers, the number to the power of two, 
and the sum up to that point and also writes the average of all the numbers to a text file 
displays the average of these numbers.
************************************************************************************************************/
#include <iostream>
#include <fstream>   //All of our include statements set up
#include <string>
using namespace std;

int main() {
    //Setting everything up 
    string inputFileName;
    string outputFileName;
    int fileNum;
    int fileSum = 0;
    int fileCount = 0;
    int previousSum = 0;
    
    //Prompts user to enter the name of the files
    cout << "Please input the input file name" << endl;
    cin >> inputFileName; //collects name of data.dat
    cout << "Please input the output file name" << endl;
    cin >> outputFileName; //collects name of output.dat

    //input and output streams with the respective file names
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    //If the file cannot be opened the user is informed
    if (!inputFile.is_open()) {
        cout << "Error opening input file" << endl;
        return 1;
    }
    //IF the file cannot be opened, again, the user is informed
    if (!outputFile.is_open()) {
        cout << "Error opening output file" << endl;
        return 1;
    }

    
    /*For the even numbers, it writes the numbers, the number to the power of two, and the sum up to that point 
    and also writes the average of all the numbers to a text file displaying the average of these numbers */
    while (inputFile >> fileNum) {
        if (fileNum % 2 == 0) {
            fileSum += fileNum * fileNum;
            outputFile << fileNum << " " << fileNum * fileNum << " " << fileSum << endl;
        }
        previousSum = fileSum;
        fileCount++;
    }

    //Average is calculated
    double fileAverage = (double)previousSum / fileCount;
    outputFile << "Average: " << fixed << fileAverage << endl;


    //We're finished, so the files are closed
    inputFile.close();
    outputFile.close();

    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

