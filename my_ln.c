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

	/* old file*/
	char old[50];

	/* new file */
	char new[50];

	/* hard link flag */
	int hFlag = 1;

	//checking for soft link option
	if (strcmp("-s", argv[1]) == 0) { 
		hFlag = 1;
	}

	if (hFlag == 1){
		strcpy(old, argv[1]);
		strcpy(new, argv[2]);

		//printf("old: %s\n",old );
		//printf("new: %s\n",new );

		link(old, new);

	}

	else {
		strcpy(old, argv[2]);
		strcpy(new, argv[3]);

		//printf("%s\n",old );
		//printf("%s\n",new );
	}	
}