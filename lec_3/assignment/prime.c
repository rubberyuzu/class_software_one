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
	if(n <= 1) {
		return 0;
	} else if(n == 2) {
		return 1;
	}

	int i;
	for(i=2; i<n; i++) {
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}