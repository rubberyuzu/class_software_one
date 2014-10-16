#include <stdio.h>

int main() {
	long nc;
	// long is bigger than int.
	// long = 32 bit, int = usually 32bit(depends on your computer system)
	nc = 0;
	while( getchar() != EOF){
		++nc;
    // note that \n is also counted as one char
	}
	printf("%ld\n", nc);
}

// memo: ./a.out < news.txt > result.txt