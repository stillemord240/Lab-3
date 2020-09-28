/*
Anthony Thompson
C++ Fall 2020
Due September 28th 23:59
Lab 3: User and File I/O
Description: Write an interactive C++ program that computes and outputs the mean and  population standard deviation of a set of four integers that are inputted by a file called “inMeanStd.dat” and the user (should handle both).
Although the individual values are integers, the results are floating-point values. Be sure to use proper formatting and appropriate comments in your code. Provide appropriate prompts to the user.
The output should be to the screen for the user inputted values and to a file called “outMeanStd.dat”. The programs output should be labeled clearly and formatted neatly. You must calculate the mean and standard deviation in separate functions.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	// Initializing Variables for future use
	int consoleA;
	int consoleB;
	int consoleC;
	int consoleD;
	float consoleMean;
	float consoleDeviation;
	int fileA;
	int fileB;
	int fileC;
	int fileD;
	float fileMean;
	float fileDeviation;
	// Initializing variables for file locations
	string inputfile = "inMeanStd.dat";
	string outputfile = "outMeanStd.dat";
	// I don't quite know what this does
	ifstream inFile;
	ofstream outFile;

	// Opening files for use
	inFile.open(inputfile);
	outFile.open(outputfile);

	// Retrieving data from file
	inFile >> fileA >> fileB >> fileC >> fileD;
	// Performing Calculations
	fileMean = (fileA + fileB + fileC + fileD) / 4;
	fileDeviation = sqrt(pow(int(fileA - fileMean), 2) + pow(int(fileB - fileMean), 2) + pow(int(fileC - fileMean), 2) + pow(int(fileD - fileMean), 2) / 4);
	// Outputting data to file
	outFile << "Mean of Data Set is: " << fileMean << endl << "Standard Deviation of Data Set is: " << fileDeviation;
	
	// Requesting data from user(console)
	cout << "Please enter 4 integers.\n";
	cin >> consoleA >> consoleB >> consoleC >> consoleD;
	// Performing calculations
	consoleMean = (consoleA + consoleB + consoleC + consoleD) / 4;
	consoleDeviation = sqrt (pow(int(consoleA - consoleMean), 2) + pow(int(consoleB - consoleMean), 2) + pow(int(consoleC - consoleMean), 2) + pow(int(consoleD - consoleMean), 2) / 4);
	// Outputting data to user(console)
	cout << "Mean of Data Set is: " << consoleMean << endl << "Standard Deviation of Data Set is: " << consoleDeviation;
	
	// Releasing files from memory
	inFile.close();
	outFile.close();

	return 0;
}