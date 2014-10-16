#include <stdio.h>

int main() {
	int c, nl;
	nl = 0;

	while( (c=getchar()) != EOF){
		// have to use '' since this is not a string "".
		if (c== '\n') {
			// add one to nl.
			++nl;
		}
	}
	printf("%d\n", nl);
}


