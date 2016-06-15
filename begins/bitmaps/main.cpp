#include <iostream.h>

/*
 * bitmaps -- program to store bitmaps in byte arrays.
 *	One byte equals eight bits.  Use binary operators
 *	to set the bits.
 *
 *
 *
 *
 *
 *
 */

const int X_SIZE = 40;  	// Size of array in X direction
const int Y_SIZE = 40;		// Size of array in Y direction

/*
 *  Use X_SIZE / 8 because be pack 8 bits per byte
 *
 */

char bitmap[X_SIZE / 8][Y_SIZE]; // Bitmap data;

/*
 * set_bit -- sets a bit in the bitmap array
 *
 * Parameters
 *	x,y -- location of the bit
 *
 */

inline void set_bit(const int x, const int y) {
    bitmap[(x)/8][y] |= (0x80 >> ((x)%8));
}

/*
 * clear_bit -- clears a bit in the bitmap array
 *
 *
 * Parameters
 *	x, y -- location of the bit
 *
 */
inline void clear_bit(const int x, const int y) {
    bitmap[(x)/8][y] &= ~bitmap[(x)/8][y];
}


void print_bitmap(void) {
    int x;			// Current x byte
    int y;			// Current y location
    int bit; 			// Bit we are testing in the current byte

    for (y=0; y < Y_SIZE; ++y) {
        for (x=0; x < X_SIZE / 8; ++x) {
            // Handle each bit
            for (bit = 0x80; bit > 0; bit = (bit >> 1)) { // Moves one bit a time from left to right on an 8 bit sequence
                if ((bitmap[x][y] & bit) != 0) {
                    cout << 'X';
                } else {
                    cout << '.';
                }
            }
        }
        cout << '\n';
    }
}
    

int main (int argc, const char * argv[]) {
    int x; 			// x bit
    int y;			// y bit
//    void print_bitmap(void);	// Print the data

    for (x = 0; x < X_SIZE; ++x) {
        for (y = 0; y < Y_SIZE; ++y) {
            if ((x % 10 == 0) || (y % 10 == 0)) {
                set_bit(x, y);
            }
        }
    }

    print_bitmap();


    return 0;
}
