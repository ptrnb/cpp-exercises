#include <iostream>


const float PI = 3.1415926;			// PI

float radius;						// The radius of a sphere in mm
float volume;						// Sphere's volume as calculated (mm)





int main()
{
	std::cout << "Enter the radius of a sphere in mm: ";
	std::cin >> radius;
	volume = ((4.0 / 3.0) * PI * ( radius * radius * radius));
	std::cout << "A sphere of radius " << radius << "mm has a volume of " << volume << "cubic mm\n";
}
	
