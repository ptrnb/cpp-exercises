#include <iostream>

float celcius;				// Temperature in celcius
float farenheit;			// Temperature in farenheit


int main() 
{
	std::cout << "Enter the temparature in celcius you want to convert: ";
	std::cin >> celcius;
	farenheit = 9.0 * celcius / 5.0 + 32.0;
	std::cout << celcius << " degrees celcius is " << farenheit << " degrees farenheit\n";
}
