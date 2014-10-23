#include <stdio.h>

double get_average(int numbers[], int N);

int main() {
	int numbers[3] = {1,2,3};
	double avr = get_average(numbers, 3);
	printf("%f\n", avr);
}

double get_average(int numbers[], int N) {
	double average = 0;
	for (int i = 0; i < N; ++i) {
		average += numbers[i];
	}
	average = average/N;
	return average;
}
// OUTPUT: 2.000000
// the average gets converted to double automatically.

