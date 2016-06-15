#include <iostream>

int result; 				// the result of the calculation
char oper_char; 			// the user-specified operator
int value;					// value specified after the operator


int main()
{
	result = 0;				// Initialise the result
	
	// Loop forever (or till we hit a break statement)
	while (1) {
		std::cout << "Result: " << result << "\n";

		std::cout << "Enter an operator and number: ";
		std::cin >> oper_char >> value;

		if ((oper_char == 'q') || (oper_char == 'Q')) 
			break;
		
		switch (oper_char) {
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '/':
				if (value == 0) {
					std::cout << "Divide by zero error\n";
				} else {
					result /= value;
				}
				break;
			case '*':
				result *= value;
				break;
			case 'h':
			case 'H':
				std::cout << "Operator Meaning\n";
				std::cout << "  +      Add\n";
				std::cout << "  -      Subtract\n";
				std::cout << "  *      Multiply\n";
				std::cout << "  /      Divide\n";
				continue;
			default:	
				std::cout << "Unknown opertator " << oper_char << "\n";
				continue;
		}
	}
	
	return (0);

}
