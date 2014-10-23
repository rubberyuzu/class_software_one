#include <stdio.h>

int y; // global variable
int z; // global vatiable

void myfunc(int a){
	int z; // local to myfunc
	int x; // local to myfunc
	x = a; // local to myfunc
	y = a; // global variable
	z = a; // local primarily, instead of global.
}

int main() {
	int x; // local to main
	x = 10; // local to main
	y = 10; // global
	z = 10; // global
	printf("x,y,z is %d, %d, %d each.\n", x,y,z);
	myfunc(5);
	printf("after myfunc(5)...\n");
	printf("x,y,z is %d, %d, %d each.", x,y,z);
}

// OUTPUT
// x,y,z is 10, 10, 10 each.
// after myfunc(5)...
// x,y,z is 10, 5, 10 each.

// what this means:
// memory for local variables is released
// every time the scope is over.