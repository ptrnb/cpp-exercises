#include <iostream>

int height;          // the height of a triangle
int width;           // the width of a triangle
int area;            // the calculated area

int main()
{
	std::cout << "Enter width and height: ";
	std::cin >> width >> height;
	area = (width * height) / 2;
	std::cout << "The area is " << area << "\n";
	return(0);
}
