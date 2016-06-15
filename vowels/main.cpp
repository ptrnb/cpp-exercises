#include <iostream.h>
/*
 * vowels -- reads a char from stdin and prints out
 *	     whether it is a consonant or vowel.
 *
 *
 */

const char VOWELS[] = "aeiou";

    
inline int isVowel(char &letter) {
    // using pointers for performance reasons
    // although this hardly seems necessary for 5 element string!
    const char *vowel_ptr;
    vowel_ptr = VOWELS;

    // Is the letter contained in the string of vowels?
    while (*vowel_ptr != '\0') {
        if (tolower(letter) == *vowel_ptr) return (1);
        ++vowel_ptr;
    }
    
    return (0);
}


int main (int argc, const char * argv[]) {

    char letter;

    // Loop until user terminates program
    while (1) {
        cout << "Enter letter (or . to exit): ";
        cin >> letter;

        // Terminate program
        if (letter == '.') break;
        
        // Make sure we're dealing with a letter first
        if (isalpha(letter)) {
            // Vowel or consonant?
            if (isVowel(letter)) {
                cout << "The letter " << letter << " is a vowel.\n";
            } else {
                cout << "The letter " << letter << " is a consonant.\n";
            }
        } else {
            cout << "The character " << letter << " is not a letter.\n";
        }
    }
    return 0;
}
