#include <iostream.h>

#define EOLN '\n'

int main (int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";

    while (*argv != '\0') {
        cout << "Argument - " << *argv << EOLN;
        ++argv;
    }
    return 0;
}
