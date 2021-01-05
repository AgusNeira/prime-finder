#include <stdio.h>
#include <stdlib.h>

#include "is-prime.h"

int check(int argc, char **argv) {
	if (argc == 2) {
		printf("Error: no number was given\n");
		return 1;
	}
	long int temp_num;
	for (int i = 2; i < argc; i++) {
		temp_num = strtol(argv[i], NULL, 10);

		if (isPrime(temp_num)) {
			printf("%d ", temp_num);
		}
	}
	printf("\n");
	return 0;
}