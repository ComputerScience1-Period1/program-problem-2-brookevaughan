/* 
Brooke Vaughan - 9/26/17 - Period 1
Assignment Name : Take in Data
Display Data, Accept User Response, Display Changed Data
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()
#include <math.h> // power function pow

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int age;
	float water;
	double number;
	bool dog = false; // assume no one has beet roots
	char bee;
	int calc_1, calc_2, calc_3;

	// User Queries 
	cout << "How old are you? ";
	cin >> age; // int
	cout << "How many ounces of water do you drink in a day to the nearist tenth? ";
	cin >> water; // float? 
	cout << "Type the biggest number you can think of? ";
	cin >> number;
	cout << "Do you have a dog : Y/N ";
	cin >> bee;
	if (bee == 'Y' || bee == 'y') {
		dog = true; // freely changes the value from false to true
	}

	// After questions print out stored data 
	cout << "You are " << age << " years old. \n"; // \n creates a new line
	cout << "You drink " << water << " ounces of water in a day." << endl; // different type new line
	cout << "The biggestest number you could think of was " << number << '\n';
	cout << boolalpha << "It is " << dog << " that you have a doggo. " << endl;

	// Change Values

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter in another number to add and multiply to the first : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;
	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter in another number to subtract and divide from the first : ";
	cin >> calc_2;
	cout << calc_1 << " - " << calc_2 << " = " << calc_1 - calc_2 << endl;
	calc_3 = calc_1 / calc_2;
	cout << calc_1 << " / " << calc_2 << " = " << calc_3 << endl;
	// Pause
	pause();
}