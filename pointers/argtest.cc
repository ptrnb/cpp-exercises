
/*
 * argtest -- code to test c++'s command line argument passing mechanism
 *
 *
 */


#include <iostream.h>

#define  EOLN "\n"

int main(int argc, char *argv[]) {
	/*
	int index;
	for (index=0; index < argc; index++) {
		cout << "Argument " << index << ": " << argv[index] << EOLN;
	}
	*/

	while (argc > 0) {
		cout << "Argument: " << *argv << EOLN;
		--argc;
		++argv;
	}
}
