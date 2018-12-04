#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/*******************************
 * Lab 13
 * Creating soft and hard links
 * Programming Assignment (ln)
 * By Kasey Stowell + Kehlsey Lewis
 *******************************/

int main (int argc, char *argv[]) {

	/* original file*/
	char old[50];

	/* link file */
	char new[50];

	/* symbolic link flag */
	int sFlag = 0;

	//checking to make sure file names are provided
	if (argc < 3){
		printf("Please provide an original file and a link name\n");
		return 0;
	}

	//checking for soft link option
	if (strcmp("-s", argv[1]) == 0) { 
		sFlag = 1;
	}

	//creating a hard link
	if (!sFlag){
		strcpy(old, argv[1]);
		strcpy(new, argv[2]);

		if (link(old, new) >= 0){
			printf("Hard link was created.\n");
		}

		else {
			printf("Hard link creation failed.\n");
		}
	}

	//creating a symbolic link
	else {
		strcpy(old, argv[2]);
		strcpy(new, argv[3]);

		if (symlink(old, new) >= 0){
			printf("Symbolic link was created.\n");
		}

		else {
			printf("Symbolic link creation failed.\n");
		}
	}	
}