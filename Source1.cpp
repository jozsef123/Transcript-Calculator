#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int count = 0;
	int grades[50];
	double GPA=0;
	int num;
	char input;
	double total=0;
	int units=0;
	int i = 0;
	bool quit;
	bool repeat;
	cout << fixed << showpoint << setprecision(2);
	
	cout << "This program will calculate your GPA: " << endl;
	do {
		repeat = false;
		cout << "First enter the grades for your 3 unit classes, when done type 'Q': ";
		do {
			cin >> input;
			quit = false;
			if (input == 'A' || input == 'a')
				num = 12;
			else if (input == 'B' || input == 'b')
				num = 9;
			else if (input == 'C' || input == 'c')
				num = 6;
			else if (input == 'D' || input == 'd')
				num = 3;
			else if (input == 'F' || input == 'f')
				num = 0;
			else if (input == 'Q' || input == 'q')
				quit = true;
			if (input == 'A' || input == 'a' || input == 'B' || input == 'b' || input == 'C' || input == 'c' || input == 'D' || input == 'd' || input == 'F' || input == 'f')
			{
				grades[count] = num;
				count++;
			}
			if (input == 'A' || input == 'a' || input == 'B' || input == 'b' || input == 'C' || input == 'c' || input == 'D' || input == 'd')
			{
				units += 3;
			}

		} while (quit == false);
		for (i; i < count; i++)
		{
			total += grades[i];
		}

		cout << "Enter the grades for your 4 unit classes, when done type 'Q': ";
		do {
			cin >> input;
			quit = false;
			if (input == 'A' || input == 'a')
				num = 16;
			else if (input == 'B' || input == 'b')
				num = 12;
			else if (input == 'C' || input == 'c')
				num = 8;
			else if (input == 'D' || input == 'd')
				num = 4;
			else if (input == 'F' || input == 'f')
				num = 0;
			else if (input == 'Q' || input == 'q')
				quit = true;
			if (input == 'A' || input == 'a' || input == 'B' || input == 'b' || input == 'C' || input == 'c' || input == 'D' || input == 'd' || input == 'F' || input == 'f')
			{
				grades[count] = num;
				count++;
			}
			if (input == 'A' || input == 'a' || input == 'B' || input == 'b' || input == 'C' || input == 'c' || input == 'D' || input == 'd')
			{
				units += 4;
			}

		} while (quit == false);
		for (i; i < count; i++)
		{
			total += grades[i];
		}


		cout << "Now, enter the grades for your 5 unit classes, when done type 'Q': ";
		do {
			cin >> input;
			quit = false;
			if (input == 'A' || input == 'a')
				num = 20;
			else if (input == 'B' || input == 'b')
				num = 15;
			else if (input == 'C' || input == 'c')
				num = 10;
			else if (input == 'D' || input == 'd')
				num = 5;
			else if (input == 'F' || input == 'f')
				num = 0;
			else if (input == 'Q' || input == 'q')
				quit = true;
			if (input == 'A' || input == 'a' || input == 'B' || input == 'b' || input == 'C' || input == 'c' || input == 'D' || input == 'd' || input == 'F' || input == 'f')
			{
				grades[count] = num;
				count++;
			}
			if (input == 'A' || input == 'a' || input == 'B' || input == 'b' || input == 'C' || input == 'c' || input == 'D' || input == 'd')
			{
				units += 5;
			}

		} while (quit == false);

		for (i; i < count; i++) {
			total += grades[i];
		}
		GPA = total / units;
		cout << "\n************GRADE DATA************" << endl;
		cout << "Your total Grade points are: " << total << endl;
		cout << "Your total units are: " << units << endl;
		cout << "Your GPA  is: " << GPA << endl;
		cout << "Do you wish to enter more grades, on top of these grades? <Y> <N>:" << endl;
		cin >> input;
		if (input == 'Y' || input == 'y')
		{
		repeat = true;
		}
	} while (repeat == true);
	return 0;
}
