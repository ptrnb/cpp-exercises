

#include <iostream.h>

int array[10] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int *array_ptr;

main()
{
	array_ptr = array;
	while ((*array_ptr) != 0)
		++array_ptr;;
	cout << "Array = " << array;
	cout << "Array ptr = " << array_ptr;
	cout << "Number of elements before zero " << (array_ptr - array) << "\n";
	return (0);
}
