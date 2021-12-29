// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here
void kineticEnergy(double, double, double&, double& );

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	double mass, 
		vel, 
		kinEnergy, 
		momentum;

	// Inform user what program does


	// Prompt user to enter data needed by the program
	cout << "Enter the object's mass (in kg): ";
	cin >> mass; //get mass

	cout << "Enter the object's velocity (in m/s): ";
	cin >> vel; // get vel
	
	kineticEnergy(mass, vel, kinEnergy, momentum); // use user input, mass and vel, to calculate kinEnergy and momentum

	cout << "Kinetic energy: " << kinEnergy << endl;
	cout << "Momentum: " << momentum << endl;

	// A software algorithm would typically be executed after all data has been input


	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

void kineticEnergy(double mass, double vel, double &kinEnergy, double &momentum) //kinEnergy and momentum pass by reference so they can be changed
{

	kinEnergy = (1.0 / 2.0) * mass * vel * vel;
	momentum = mass * vel;

}


// PROOF
// Program output copied into the below comment section
/*
Proof 1:
Enter the object's mass (in kg): 75
Enter the object's velocity (in m/s): 10
Kinetic energy: 3750
Momentum: 750
Press any key to continue . . .

Proof 2:
Enter the object's mass (in kg): 25.7
Enter the object's velocity (in m/s): 8.3
Kinetic energy: 885.237
Momentum: 213.31
Press any key to continue . . .
*/