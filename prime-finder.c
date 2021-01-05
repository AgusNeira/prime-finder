#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int isPrime(long number) {
	long root = sqrt(number);

	for (int i = 2; i <= root; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char **argv) {
	long temp_num;
	char *end;
	for (int i = 1; i < argc; i++) {
		temp_num = strtol(argv[i], &end, 10);

		if (isPrime(temp_num)) {
			printf("%d IS a prime number\n", temp_num);
		} else {
			printf("%d IS NOT a prime number\n", temp_num);
		}
	}

	if (argc == 1) {
		printf("Usage:\n");
		printf("\tprime-finder <number1> [<number2> <number3>...]\n");
	}

	return 0;
}
