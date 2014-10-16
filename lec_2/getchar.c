#include <stdio.h>

int main() {
	int c;
	// getchar() is something like ARGV in ruby, but only one char.
	// why getting strings then...?
	// -> this is about os & buffers.
	//    waits until the return key is pressed...?
	c = getchar();

	// EOF = end of file = control D
	while(c != EOF) {
		putchar( c );
		c = getchar();
	}
	printf("done");
}