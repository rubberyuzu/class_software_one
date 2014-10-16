#include <stdio.h>

int main() {
	int c;
	while( (c = getchar()) != EOF)
		putchar( c );
	// here, when entering the while loop,
	// firstly c = getchar() operation is done,
	// and secondly c is used in the condition sentence.
	// same thing happens in ("%d", a=b)
}