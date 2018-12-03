#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>

/*******************************
 * Lab 13
 * Creating soft and hard links
 * Programming Assignment (ln)
 * By Kasey Stowell + Kehlsey Lewis
 *******************************/

int main (int argc, char *argv[]) {

	// Check command line arguments.
	for (int i = 1; i < argc; i++) {

	// Was a file path given.
	if (argc > 1 && strchr(argv[argc - 1], '/') != NULL) {
		strcpy(fp, argv[argc - 1]);
	}


		if (strcmp("-s", argv[i]) == 0) { //for soft link
			inode_n = 1;








		} else { //for hard link
			file_id = 1;







		}
	}
	
}