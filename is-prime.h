#include <math.h>

int isPrime (long int n) {
	long int number = abs(n);
	
	if (number <= 2) return 1;

	long int root = ceil(sqrt(number));

	for (int i = 2; i <= root; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}