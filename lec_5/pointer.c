#include <stdio.h>

void swapbyval(int, int);
void swapbyref(int*, int*);

int main(){
	int a = 1, b = 2;

	printf("a=%d, b=%d\n", a, b);
	swapbyval(a, b);
	printf("a=%d, b=%d\n", a, b);
	swapbyref(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return 0;
}

void swapbyval(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
// does NOT swap.
// the memory for variables(x, y) are created newly
// when this func is called.
// and it's gonna be released when program finishes.

void swapbyref(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}