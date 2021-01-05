#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "check.h"
#include "interval.h"

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Error: sub-command not specified\n");
		return 1;
	}

	if (strcmp(argv[1], "check") == 0) {
		return check(argc, argv);
	} else if (strcmp(argv[1], "interval") == 0) {
		return interval(argc, argv);
	}
	
	return 0;
}
