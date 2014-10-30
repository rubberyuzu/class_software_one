#include <stdio.h>
#define OCHI 400

void nabe(int n);
int include_three(int n);

int main() {
	for (int i = 1; i <= OCHI; ++i){
		nabe(i);
	}
}

void nabe(int n) {
	// Note that Nabeatsu gets excited not only
	// for nums which can be divided by 3 but
	// also for ones which include 3.
	if(n%3 == 0||include_three(n)) {
		printf("%d!!!\n", n);
	}else{
		printf("%d\n",n);
	}
}

int include_three(int n){
	if(n == 0){
		return 0;
	}else if(n%10 == 3){
		return 1;
	}else{
		return include_three((n-(n%10))/10);
	}
}