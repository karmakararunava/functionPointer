#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum ();
char *concat ();

int main () {
	int (*fPointer)(int, int) = &sum;
	//int (*fPointer)(int, int) = sum; // okay
	printf ("Sum = %d\n", (*fPointer)(2, 3));
	//printf ("Sum = %d\n", (fPointer)(2, 3)); // okay
	
	printf ("fbgfbm");
	char *str = "Hello, ";
	printf ("Whoa!!");
	printf ("%s", concat (str));
	
	return EXIT_SUCCESS;
}

int sum (int a, int b) {
	return a+b;
}

char *concat (char *str1) {
	printf ("HI!!");
	char *str2 = "World!!!";
	char *str = strcat (str2, str1);
	return str;
}
