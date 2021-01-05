#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(long number) {
	long root = sqrt(number);

	for (int i = 2; i <= root; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Error: sub-command not specified\n");
		return 1;
	}

	if (strcmp(argv[1], "check") == 0) {		// CHECK sub-command
		long temp_num;
		char *end;

		if (argc == 2) {
			printf("Error: no number was given\n");
			return 1;
		}

		for (int i = 2; i < argc; i++) {
			temp_num = strtol(argv[i], &end, 10);

			if (isPrime(temp_num)) {
				printf("%d ", temp_num);
			}
		}
		printf("\n");
	}
	
	return 0;
}
