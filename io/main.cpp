#include <iostream.h>
#include <iomanip.h>


int main (int argc, const char * argv[]) {
    int number = 12;
    float real = 12.34;

    cout << "123456789012345678901234567890\n";
    cout << number << "<-\n";
    cout << setw(5) << number << "<-\n";
    cout << setw(5) << setfill('*') << number << "<-\n";
    cout << setiosflags(ios::showpos|ios::left) << setw(5) << number << resetiosflags(ios::showpos|ios::left) << "<-" << endl; 
    cout << real << "<-\n";
    cout << setprecision(1) << setiosflags(ios::fixed) << real << "<-\n";
    cout << setiosflags(ios::scientific) << real << "<-\n";


    return 0;
}
