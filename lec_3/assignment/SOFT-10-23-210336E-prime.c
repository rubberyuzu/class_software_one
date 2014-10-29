#include <stdio.h>

int is_prime(int num);

int main() {
	int i;
	for(i=2; i<=1000; i++) {
		if(is_prime(i)){
			printf("%d is a prime number.\n", i);
		} 
	}
}

int is_prime(int n) {
	if(n == 2) {
		return 1;
		// avoid using break by using return
	}

	int i;
	for(i=2; i<n; i++) {
		if(n%i == 0){
			// if n can be divided by any smaller number than n,
			// n is not a prime.
			return 0;
		}
	}
	// only when n is prime the program reaches until here.
	return 1;
}