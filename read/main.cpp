#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>


const int DATA_SIZE = 100;		// Number of items in data
int data_array[DATA_SIZE];		// The data

void zero(int *arr_ptr, const int length) {
    int i;				// Loop counter
    for (i = 0; i < length; ++i) {
        *(arr_ptr + i) = 0;
    }
}

int main (int argc, const char * argv[]) {

    ifstream data_file("numbers.dat");	// Input file

    int i;				// Loop counter

    zero(data_array, DATA_SIZE);	// Init array

    // Exit if an error opening file
    if (data_file.bad()) {
        cerr << "Error: Could not open numbers.dat\n";
        exit (8);
    }

    for (i = 0; i < DATA_SIZE; ++i) {
        data_file >> data_array[i];
    }

    int total;

    total = 0;
    for (i = 0; i < DATA_SIZE; ++i) {
        total += data_array[i];
    }

    cout << "Total of all items in numbers.dat is " << total << '\n';

    return 0;
}
