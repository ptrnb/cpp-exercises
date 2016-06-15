#include <string.h>
#include <iostream>

char line[100];					// A line of data


int main()
{
	std::cout << "Enter a line: ";
	std::cin.getline(line, sizeof(line));

	std::cout << "The length of the line is: " << strlen(line) << "\n";
	return(0);
}
