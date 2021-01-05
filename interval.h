#ifndef INTERVAL_H
#define INTERVAL_H

#include <stdio.h>
#include <stdlib.h>

#include "is-prime.h"

int interval (int argc, char **argv) {
	if (argc != 4) {
		printf("Error: incorrect number of arguments\n");
		return 1;
	}

	long int lower_bound, upper_bound;

	lower_bound = strtol(argv[2], NULL, 10);
	upper_bound = strtol(argv[3], NULL, 10);

	if (lower_bound >= upper_bound) {
		printf("Error: the first argument must be smaller than the second one\n");
		return 1;
	}

	for (int i = lower_bound; i <= upper_bound; i++) {
		if (isPrime(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

#endif
