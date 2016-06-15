/*
 *  unbuffered.cpp
 *  io
 *
 *  Created by Peter Brown on Sun Feb 09 2003.
 *  Copyright (c) 2003 __MyCompanyName__. All rights reserved.
 *
 * Copy -- Copy one file to another
 *
 * Usage
 * 	copy <from> <to>
 *
 * <from> -- the file to copy from
 * <to>   -- the file to copy to
 */

#include <iostream.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifdef __MSDOS__
#include <io.h>
#else /*__MSDOS__*/
#include <unistd.h>
#endif /*__MSDOS__*/

const int BUFFER_SIZE = (16 * 1024); // Use 16K buffers

int main(int argc, char *argv[]) {
    char buffer[BUFFER_SIZE];		// Buffer for data
    int in_file;			// Handle for input
    int out_file;			// Handle for output
    int read_size;			// Number of bytes on last read

    if (argc != 2) {
        cerr << "Error: Wrong number of arguments\n";
        cerr << "Usage is: copy <from> <to>\n";
        exit(8);
    }

    in_file = open(argv[1], O_RDONLY);
    if (in_file < 0) {
        cerr << "Error: unable to open " << argv[1] << '\n';
        exit(8);
    }

    out_file = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0666);
    if (out_file < 0) {
        cerr << "Error: unable to open " << argv[2] << '\n';
        exit(8);
    }

    while(1) {
        read_size = read(in_file, buffer, sizeof(buffer));

        if (read_size == 0) {
            break;
        }

        if (read_size < 0) {
            cerr << "Error: Read Error\n";
            exit(8);
        }

        write(out_file, buffer, (unsigned int) read_size);
    }

    close(in_file);
    close(out_file);
    return(0);
}
