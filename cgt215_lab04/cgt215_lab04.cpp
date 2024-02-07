// cgt215_lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is designed to demonstrate knowledge of flow control & loops.

#include <iostream>
#include <math.h>
using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	int num(-1);
	int total(1);

	cout << "Factorial:" << endl << "Enter a number: ";
	while (num <= 0) { //Loops until the user inputs a number greater than 0.
		cin >> num;
		if (num > 0) { break; }
		cout << "Sorry, please enter a whole number: ";
	}

	cout << num << "! = ";
	for (int i = 1; i <= num; i++) {
		//Calculates term by multiplying the current total with the current loop iteration.
		total *= i;
		if (i != 1) { cout << " * " << i; } else { cout << i; }
	}

	cout << " = " << total << endl;

}
void arithmetic() {
	int num;
	int incr(0);
	int count(-1);
	int total(0);

	cout << "Arithmetic Series:" << endl << "Enter a number to start at: ";
	cin >> num;

	cout << "Enter a number to add each time: "; //Loops until the user inputs an increment other than zero.
	while (incr == 0) {
		cin >> incr;
		if (incr != 0) { break; }
		cout << "Sorry, please enter a number other than zero: ";
	}

	cout << "Enter the number of elements in the series: "; //Loops until the user inputs a sequence count greater than 0.
	while (count <= 0) {
		cin >> count;
		if (count > 0) { break; }
		cout << "Sorry, please enter a whole number: ";
	}

	for (int i = 0; i < count; i++) {
		//Calculates term by adding the start number with the increment, which has been multiplied by the current loop iteration.
		total += (num + (incr * i));
		if (i != 0) { cout << " + " << num+(incr*i); }
		else { cout << num; }
	}

	cout << " = " << total << endl;
}
void geometric() {
	int num;
	int mult(0);
	int count(-1);
	int total(0);

	cout << "Geometric Series:" << endl << "Enter a number to start at: ";
	cin >> num;

	cout << "Enter a number to multiply each time: ";
	while (mult == 0) { //Loops until the user inputs a multiple other than zero.
		cin >> mult;
		if (mult != 0) { break; }
		cout << "Sorry, please enter a number other than zero: "; 
	}

	cout << "Enter the number of elements in the series: ";
	while (count <= 0) { //Loops until the user inputs a sequence count greater than 0.
		cin >> count;
		if (count > 0) { break; }
		cout << "Sorry, please enter a whole number: ";
	}

	for (int i = 0; i < count; i++) {
		//Calculates term by multiplying the start number by the multiplier raised to power of the current loop iteration.
		total += (num * pow(mult, i));  
		if (i != 0) { cout << " + " << num*pow(mult, i); }
		else { cout << num; }
		
	}

	cout << " = " << total << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}