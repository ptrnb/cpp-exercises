#include <iostream>






float resistance;					// cumulative total 
float value;						// individual resistance

int main()
{
	resistance = 0;					// initialise resistance
	std::cout << "Enter resistor values or enter '0' to total resistance:\n";

	while (1) {
		std::cin >> value;
		if (value == 0) {
			std::cout << "The resistance is " << 1.0 / resistance << " ohms\n";
			break;
		} else {
			resistance += 1.0 / value;
		}
	}
}
		
