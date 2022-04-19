//Aubrey Church
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//constants
	const double AIR = 1100;
	const double WATER = 4900;
	const double STEEL = 16400;
	
	//declaring variables
	int choice;
	double distance, speed, time;
	
	//number formatting
	cout <<fixed <<showpoint <<setprecision(4);
	
	//menu
	cout <<"Select a medium:\n";
	cout <<"1. Air\n" <<"2. Water\n" <<"3. Steel\n\n";
	cout <<"Enter your choice: ";
	cin >> choice; 
	
	//switch statement
	switch (choice) {
		case 1:
		speed = AIR;
		
		//check for zero
		cout << "Enter the distance: ";
		cin >> distance;
		if (distance > 0) {
			time = distance/speed;
			cout << "\nA sound wave takes " <<time <<" seconds to travel " <<distance <<" feet through air.\n";	
		} //end if	
		else {
			cout <<"\nDistance must be greater than zero.\n";
		} //end else	
		break;
		
		case 2:
		speed = WATER;
		
		//check for zero
		cout << "Enter the distance: ";
		cin >> distance;
		if (distance > 0) {
			time = distance/speed;
			cout << "\nA sound wave takes " <<time <<" seconds to travel " <<distance <<" feet through water.\n";	
		} //end if	
		else {
			cout <<"\nDistance must be greater than zero.\n";
		} //end else	
		break;
		
		case 3:
		speed = STEEL;
		
		//check for zero
		cout << "Enter the distance: ";
		cin >> distance;
		if (distance > 0) {
			time = distance/speed;
			cout << "\nA sound wave takes " <<time <<" seconds to travel " <<distance <<" feet through steel.\n";	
		} //end if	
		else {
			cout <<"\nDistance must be greater than zero.\n";
		} //end else	
		break;
		
		default:
		cout <<"\nThe valid choices are 1 through 3. Run the\n" <<"program again and select one of those.\n";
		
	} //end switch	
	
	return 0;
} //end main
