#include <stdio.h>

int addnum(int, int); // prototype before declaring

int main() {
	int n;
	n = addnum(2,3); 
	printf("%d\n", n);
	// you can use it before you actually program it,
	// because you already defined it up there.
	return 0;
}

int addnum(int a, int b) {
	int x;
	x = a + b;
	return x;
}