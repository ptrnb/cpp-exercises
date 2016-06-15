/*************************************************************************
 * begin -- test if string1 begins string2
 *
 * Usage:
 * 		begins
 *
 * 		Tests if string2 starts with string1
 * 		Uses strncmp function from string.h
 * 		
 *************************************************************************/


#include <iostream.h>
#include <string.h>

/*
 * begins -- return true if string2 starts with string1
 *
 * Parameters
 * 		string1 -- string pattern
 * 		string2 -- search string
 *
 * Returns
 * 		true if string2 starts with string1
 *
 */

inline const int begins(const char string1[], const char string2[]) {
	
	const int len = strlen(string1);				// length of first string for use with strncmp function
	
	if (strncmp(string1, string2, len) == 0) {
		return (1);
	} else {
		return (0);
	}
}



/*
 * main -- test begins function
 *
 */

int main() {
	const char first[10] = "Worl";					// string pattern
	const char second[15] = "Hello World";			// search string

	if (begins(first, second)) {
		cout << "The first string \"" << first << "\" does begin the second string \"" << second << "\"\n";
	} else {
		cout << "The first string \"" << first << "\" does NOT begin the second string \"" << second << "\"\n";
	}
}

	
