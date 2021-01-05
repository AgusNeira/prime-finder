#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "check.h"

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Error: sub-command not specified\n");
		return 1;
	}

	if (strcmp(argv[1], "check") == 0) {		// CHECK sub-command
		return check(argc, argv);
	}
	
	return 0;
}
