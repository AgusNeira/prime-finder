#ifndef IS_PRIME_H
#define IS_PRIME_H

#include <math.h>

int isPrime (long int number) {
	if (number < 2) return 0; 
	if (number == 2) return 1;

	long int root = ceil(sqrt(number));

	for (int i = 2; i <= root; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}

#endif