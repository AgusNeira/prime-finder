#ifndef FROM_H
#define FROM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "is-prime.h"

enum {
	BIGGER,
	SMALLER,
	CLOSER
};

int nextDeltaSmaller(int currentDelta) {
	return currentDelta - 1;
}
int nextDeltaBigger(int currentDelta) {
	return currentDelta + 1;
}
int nextDeltaCloser(int currentDelta) {
	if (currentDelta > 0) return -currentDelta;
	else return (-currentDelta) + 1;
}

int from(int argc, char **argv) {
	if (argc != 4 && argc != 5) {
		printf("Error: incorrect number of arguments\n");
		return 1;
	}

	long int target;
	int limit;
	int (*nextDelta)(int);
	int directionIsSmaller;		// Needed for safety check when looking downwards and hitting negative
								// numbers, to avoid an infinite loop

	target = strtol(argv[2], NULL, 10);

	if (argc == 5) limit = strtol(argv[4], NULL, 10);
	else limit = 1;

	if (strcmp(argv[3], "bigger") == 0) {
		nextDelta = &nextDeltaBigger;
		directionIsSmaller = 0;
	} else if (strcmp(argv[3], "smaller") == 0) {
		nextDelta = &nextDeltaSmaller;
		directionIsSmaller = 1;
	} else if (strcmp(argv[3], "closer") == 0) {
		nextDelta = &nextDeltaCloser;
		directionIsSmaller = 0;
	} else {
		printf("Error: invalid direction specified\n");
		return 1;
	}

	int count = 0; // Primes found so far
	int delta = 0; // Distance from the target to look in

	if (isPrime(target)) { // Check for the target itself
		printf("%d ", target);
		count++;
	}
	delta = (*nextDelta)(delta);

	while (count < limit) {		// While the amount of primes to find haven't been found
		if (isPrime(target + delta)) {
			printf("%d ", target + delta);
			count++;
		}
		delta = (*nextDelta)(delta);

		if (directionIsSmaller && -delta >= target) break;
	}
	printf("\n");
	return 0;
}

#endif