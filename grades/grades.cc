/*
 * A short program to produce a letter grade
 * based on a students numeric result
 *
 * Author: Peter Brown
 *
 *
 */


#include <iostream>
#include <string.h>


#define MINUS 	"-"
#define PLUS 	"+"


unsigned short int score; 			// Numeric score from 0 - 100
unsigned short int weightScore; 	// Numeric score used for weighting grade
char grade[3]; 						// Calculated grade


int main()
{
	std::cout << "Enter the student's numeric score: ";
	std::cin >> score;
	
	// Calculate basic grade from score
	if ((score >= 0) && (score <= 60)) {
		strcpy(grade, "F");
	} else if ((score >= 61) && (score <= 70)) {
		strcpy(grade, "D");
	} else if ((score >= 71) && (score <= 80)) {
		strcpy(grade, "C");
	} else if ((score >= 81) && (score <= 90)) {
		strcpy(grade, "B");
	} else if ((score >= 91) && (score <= 100)) {
		strcpy(grade, "A");
	} 

	// Now calculate the score weight and append the appropriate '+' or '-' value to the grade
	if ( score >= 61 ) {
		weightScore = score % 10;

		if (weightScore >= 1 && weightScore <= 3) {
			strcat(grade, MINUS);
		} else if (weightScore >= 8 || weightScore == 0) {
			strcat(grade, PLUS);
		}
	}
	
	std::cout << "The grade for score " << score << " is " << grade << "\n";
}
		



