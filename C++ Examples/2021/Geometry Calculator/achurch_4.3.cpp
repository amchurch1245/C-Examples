//Aubrey Church

#include <iostream>
using namespace std;

int main() {
	//Pi
	const double PI = 3.14159;
	
	//variables
	int choice;
	double radius, length, width, base, height, area;
	
	//menu
	cout <<"Geometry Calculator\n\n";
	cout <<"1. Calculate the area of a Circle\n";
	cout <<"2. Calculate the area of a Rectangle\n";
	cout <<"3. Calculate the area of a Triangle\n";
	cout <<"4. Quit\n\n";
	cout <<"Enter your choice (1-4): ";
	cin >> choice;
	
	//switch statement
	switch (choice) {
		//Circle
		case 1:
		cout <<"\nEnter the circle's radius: ";
		cin >> radius;
		
		if (radius < 0) {
			cout <<"\nThe radius can not be less than zero.\n";
		} //end if	
		else {
			area = PI * radius * radius;
			cout <<"\nThe area is " <<area <<endl;
		} //end else	
		break;
		
		//Rectangle
		case 2:
		cout <<"\nEnter the rectangle's length: ";
		cin >> length;
		cout <<"Enter the rectangle's width: ";
		cin >> width;
		
		if (length < 0 || width < 0) {
			cout <<"\nOnly enter positive values for length and width.\n";
		} //end if	
		else {
			area = length * width;
			cout <<"\nThe area is " <<area <<endl;
		} //end else	
		break;
		
		//Triangle
		case 3:
		cout <<"\nEnter the length of the base: ";
		cin >> base;
		cout <<"Enter the triangle's height: ";
		cin >> height;
		
		if (base < 0 || height < 0) {
			cout <<"\nOnly enter positive values for base and height.\n";
		} //end if	
		else {
			area = base * height * 0.5;
			cout <<"\nThe area is " <<area <<endl;
		} //end else	
		break;
		
		//Quit
		case 4:
		cout <<"Program ending.\n";
		break;
		
		//Default
		default:
		cout <<"The valid choices are 1 through 4. Run the\n" <<"program again and select one of those.\n";
	} //end switch	
	
	return 0;
} //end main
