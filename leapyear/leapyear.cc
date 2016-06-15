/*
 * leapyear
 *
 * Calculates is a given year is a leap year
 *
 * Author: Peter Brown
 *
 * Algorithm:
 *
 * If year is divisible by 4 or by 100 but not 400
 * then the year is a leapyear.
 *
 */

#include <iostream>


unsigned short int year;		// The year input


int main()
{
	std::cout << "Enter the year: ";
	std::cin >> year;

	if ((year % 4 == 0) || (year % 100 == 0 && ! (year % 400 == 0))) {
		std::cout << "The year " << year << " is a leap year\n";
	} else {
		std::cout << "The year " << year << " is not a leap year\n";
	}
}
