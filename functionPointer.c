#include <stdio.h>
#include <stdlib.h>

int sum (int, int);

int main () {
	int (*fPointer)(int, int) = &sum;
	printf ("Sum = %d\n", (*fPointer)(2, 3));
	return EXIT_SUCCESS;
}

int sum (int a, int b) {
	return a+b;
}
