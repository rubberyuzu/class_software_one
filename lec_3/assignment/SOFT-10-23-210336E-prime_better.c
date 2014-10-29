#include <stdio.h>
#include <math.h>

int is_prime(int n, int primes[], int index);

int main() {
	int primes[200];
	// here saving the memory space of 300 integers.
	// primes in the range of 1 to 1000 only includes odd numbers,
	// which is half of the numbers, and ones which cannot divided by 3.
	// , which consists of 2 thirds.
	// This way the num of the primes is
	// 1000 * 1/2 * 2/3 * 4/5 * 6/7 * 10/11 * 12/13...
	// the result is at least less than 200,
	// So I am using the number 200 here.
	int index = 0;
	int i;
	for(i=2; i<=1000; i++) {
		if(is_prime(i, primes, index)){
			printf("%d is a prime number.\n", i);
			++index;
			// increasing index by 1, to store the prime in the right position
			// in the primes array.
		} 
	}	
}

int is_prime(int n, int primes[], int index) {

	if(n == 2) {
		primes[index] = n;
		printf("%d is the %d-th prime number.\n", n, index+1);
		return 1;
	}

	int i;
	double rt = sqrt(n);
	int calc;
	

	if (index > rt) {
		calc = (int)floor(rt);
		// getting the largest int which is equal to or smaller than rt
	} else {
		calc = index;
	}
	// here, defining the number of calculation executions
	// by comparing index and rt.
	// detailed explanation below.

	for(i=0; i<calc; i++) {
	// here, looping through the primes array, since n is prime
	// if any of the primes below n cannot divide n.
	// reducing the num of calculations from (n-2) times to 
	// (the num of primes below n) times.
	// Or, if the number of the primes below n exceeds rt,
	// the calculation will be executed rt times,
	// since the number of calculations should not exceed rt. 

		if(n%primes[i] == 0){
			return 0;
		}
	}
	primes[index] = n;
	// here, storing n into the primes array so that this prime function
	// can use it in the for loop.
	printf("%d is the %d-th prime number.\n", n, index+1);
	return 1;
}
