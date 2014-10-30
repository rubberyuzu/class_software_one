#include <stdio.h>

void nabe(int n);

int main() {
	for (int i = 1; i < 101; ++i)
	{
		nabe(i);
	}
}

void nabe(int n) {
	// Note that Nabeatsu gets excited not only
	// for nums which can be divided by 3 but
	// also for ones which include 3.
	if(n%3 == 0 || n%10 == 3 || (29<n && n<40) ) {
		printf("%d!!!\n", n);
	}else{
		printf("%d\n",n);
	}
}
