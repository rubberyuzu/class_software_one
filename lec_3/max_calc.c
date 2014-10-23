#include <stdio.h>

int get_max(int numbers[], int N);

int main() {
	int numbers[6] = {1,2,3,9,5,6};
	printf("answer is %d\n", get_max(numbers, 6));
}

int get_max(int numbers[], int N) {
	if(N == 0) {
		return 0;
		// returns 0 if NULL
	}
	int max = numbers[0];
	for (int i = 0; i < N; ++i) {
		if(max < numbers[i]) {
			max = numbers[i];
		}
	}
	return max;
}