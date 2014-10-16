#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	// here, converting int(lower) to double.
	fahr = lower;
	while ( fahr <= upper ){
		celsius = (5.0/9.0) * (fahr - 32.0);
		// 5/9 returns 0. fahr - 32 does not work as the types are different.

		// %f = real number
		// but what is 3.0 and 6.1? 
		// should check the textbook later.
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}

}

// if using #define LOWER 0, it does not use any memory.
// as it reads the values before compiling.