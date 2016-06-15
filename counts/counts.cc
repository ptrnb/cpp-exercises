
#include <iostream.h> 


const int count( const int number, const int array[], const int len ) { 
	int index; 			// index into array
	int count = 0; 		// # of matches with number
	
	for (index = 0; index <= len; index++) {
		if (array[index] == number) {
			++count;
		}
	}

	return (count);
}


int main(int argc, char *argv[]) {
	
	const int SIZE = 50;
	int numbers[SIZE];
	int index;
	int num;
	
	for (index = 1; index < argc; ++index) {
		cout << *(argv+index) << "\n";
		if (index == 1) {
			 num = int(*(argv+index));
			cout << "Num assigned " << num << "\n";
		} else {
			numbers[index] = int(*(argv+index));
		}
	}
		
	cout << "There are " << count(num, numbers, SIZE) << " occurences of " << num << " in the array\n";
}

	
