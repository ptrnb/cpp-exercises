#include <iostream.h>

const int MAX = 50;

void init_array(int *array_ptr) {
	int index;

	for(index=0; index<MAX; ++index) {
		*(array_ptr + index) = 0;
	}
}

int main() {
	int arr[MAX];
	int index;
	
	init_array(arr);

	for(index=0; index<MAX; ++index) {
		cout << "Array element = " << arr[index] << "\n";
	}
}
