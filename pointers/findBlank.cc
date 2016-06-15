/*
 * findBlank -- locates a space character in a string
 * 				and returns a pointer 
 *
 *
 */

#include <iostream.h>


char *strchr(char *string_ptr, char find) {
	while (*string_ptr != find) {
		if (*string_ptr == '\0') {
			return(NULL);
		}
		++string_ptr;
	}
	return (string_ptr);
}


int main() {
	char line[100];
	char *blank_ptr;
	
	cout << "Enter a string containing a space character: ";
	cin.getline(line, sizeof(line)); 
	
	blank_ptr = strchr(line, ' ');

	cout << "Space is at " << blank_ptr;
	return(0);
}
