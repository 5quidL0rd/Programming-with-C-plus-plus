/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  3/20/2024

This is Programming Project 4. In this project, the input file Scores.txt is taken and the golfer
scores for each golfer is calculated respectively. Then, the score report for each golfer is written
to an output file. 
************************************************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

// Function to get input file name from user
string openInputFile() {
    string inputFileName;
    cout << "Please input the input file name: ";
    cin >> inputFileName;
    return inputFileName;
}

// Function to get output file name from user
string openOutputFile() {
    string outputFileName;
    cout << "Please input the output file name: ";
    cin >> outputFileName;
    return outputFileName;
}

//Function to determine if the score is valid 
bool isValidScore (double score) {
    if (score >= 50 && score <= 130) {
        return true;
    }
    else {
        return false;
    }
    }
    
//Function to determine what the maximum score is so we can remove it
void setMaxScore(double currentScore, double& maxScore) {
    if (currentScore > maxScore) {
        maxScore = currentScore;
    }
}


//Function to calculate the average score for each player 
double calculateAverageScore(int numScores, ifstream& inputFile, ofstream& outputFile, const string& golferName) {
    double totalScore = 0;
    double validScoresCount = 0;
    double maxScore = 0; // Initialize max score

    for (int i = 0; i < numScores; ++i) {
        double score;
        inputFile >> score;
        if (isValidScore(score)) {
            totalScore += score;
            validScoresCount++;
            setMaxScore(score, maxScore); // Update max score if needed
        } else {
            // Handle invalid score
            outputFile << golferName << "'s score of " << score << " is not a valid score and will not be used in calculation" << endl;
        }
    }

    if (validScoresCount > 0) {
        return (totalScore - maxScore) / (validScoresCount-1);
    } else {
        return 0.0; // Return 0 if there are no valid scores
    }
}



// Function to write header to output file
void writeHeader(ofstream& outputFile, int numGolfers, int numScoresPerGolfer) {
    outputFile << "********************" << endl;
    outputFile << "GOLFER REPORT" << endl;
    outputFile << "********************" << endl << endl;

    outputFile << "Number of golfers processed: " << numGolfers << endl;
    outputFile << "Number of scores processed: " << numScoresPerGolfer << endl << endl;
}


void writeGolferInfo(ofstream& outputFile, const string& name, double average) {
    outputFile << "Player: " << name << endl;
    outputFile << "Average score: " << fixed << setprecision(2) << average << endl << endl;
}




//Function to process all the data and manage the other functions 
void process_input_data(ifstream& inputFile, ofstream& outputFile, int numGolfers, int numScoresPerGolfer) {
    // Write the header before processing any golfer's data
    writeHeader(outputFile, numGolfers, numScoresPerGolfer);

    for (int i = 0; i < numGolfers; ++i) {
        string name;
        inputFile >> name;
        double average = calculateAverageScore(numScoresPerGolfer, inputFile, outputFile, name);
        writeGolferInfo(outputFile, name, average); // Write golfer info to output file
    }
}



//Finally we reach our main statement 


int main() {
    //Setting up the files 
    string inputFileName = openInputFile();
    string outputFileName = openOutputFile();

    // Input and output streams with the respective file names
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    // If the file cannot be opened, the user is informed
    if (!inputFile.is_open()) {
        cout << "Error opening input file" << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cout << "Error opening output file" << endl;
        return 1;
    }

    //Input is processed 
    int numGolfers, numScoresPerGolfer;
    inputFile >> numGolfers >> numScoresPerGolfer;




    // Process input data and write to output file
    process_input_data(inputFile, outputFile, numGolfers, numScoresPerGolfer);
    

//We are finished so the files are closed out 
    inputFile.close();
    outputFile.close();

    return 0;
}


   





















