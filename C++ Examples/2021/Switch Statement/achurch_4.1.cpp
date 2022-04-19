//Aubrey Church
#include <iostream>
using namespace std;

int main() {
	int number;
	
	//inputs
	cout << "Enter a number (1 - 10): ";
	cin >> number;
	
	//switch statement
	switch (number) {
		case 1:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "I.";
		break;
		
		case 2:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "II.";
		break;
		
		case 3:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "III.";
		break;
		
		case 4:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "IV.";
		break;
		
		case 5:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "V.";
		break;
		
		case 6:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "VI.";
		break;
		
		case 7:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "VII.";
		break;
		
		case 8:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "VIII.";
		break;
		
		case 9:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "IX.";
		break;
		
		case 10:
		cout <<"The Roman numeral version of " <<number <<" is ";
		cout << "X.";
		break;
		
		default:
		cout << "Invalid input";
		break;
	} //end switch	
	
} //end main
