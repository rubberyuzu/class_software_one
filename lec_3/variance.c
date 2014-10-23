#include <stdio.h>
#include <math.h>

double get_variance( int numbers[], int N);

int main() {
	int numbers_a[3] = {1,2,3};
	int numbers_b[3] = {1,2,9};
	printf("variance: %f\n", get_variance(numbers_a, 3));
	printf("variance: %f\n", get_variance(numbers_b, 3));
}

double get_variance( int numbers[], int N) {
	double average = 0;
	for (int i = 0; i < N; ++i) {
		average += numbers[i];
	}
	average = average/N;

	double variance = 0;
	for (int i = 0; i < N; ++i) {
		variance += pow(numbers[i]-average, 2);
	}
	printf("average: %f\n", average);
	printf("sum: %f\n",variance);
	printf("N: %d\n", N);
	variance = variance /(N-1);
	return variance;
}