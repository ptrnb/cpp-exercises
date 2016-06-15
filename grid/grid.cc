#include <iostream>


#define BLANK		" "
#define PLUS        "+"
#define PIPE        "|"
#define DASH        "-"


int gridWidth;						// Number of boxes across
int gridHeight; 					// Number of boxes down
int boxWidth;						// Width in columns
int boxHeight;  					// Height in rows
int xTotal;							// Total number of 'pixels' across
int yTotal;							// Total number of 'pixels' down
int row;							// Row counter
int col;							// Col counter



int main()
{
	std::cout << "Enter the grid dimensions (width, height): ";
	std::cin >> gridWidth >> gridHeight;
	std::cout << "Enter the box size (x, y): ";
	std::cin >> boxWidth >> boxHeight;

	xTotal = gridWidth * boxWidth;
	yTotal = gridHeight * boxHeight;
	
	for (row = 0; row <= yTotal; ++row) {
		for (col = 0; col <= xTotal; ++col) {
			if (row % boxHeight == 0) {
				if (col % boxWidth == 0) {
					std::cout << PLUS;
				} else {
					std::cout << DASH;
				}
			} else {
				if (col % boxWidth == 0) {
					std::cout << PIPE;
				} else {
					std::cout << BLANK;
				}
			}
		}
		std::cout << "\n";
	}
}	
