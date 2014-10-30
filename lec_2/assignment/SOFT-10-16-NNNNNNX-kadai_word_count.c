// took me one hour to complete this program.

#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
	int c, nl, nw, nc, state, len;
	int wc[20] = { 0 }; // word count

	state = OUT;
	nl = nw = nc = 0;
	// len is the length of the word in question.
	len = 0;

	while((c=getchar()) != EOF) {
		++nc;

		if(c == '\n') {
			++nl;
		}

		// I found a bug inside src-08 while referring to it:
		// like below, first if condition should be c == ' '
		// instead of c == ''(without space inside)
		if(c == ' '|| c == '\n'|| c=='\t') {
			if(state == IN) {
				++wc[len];
			}
			state = OUT;
			len = 0;

		} else {
			  ++len;
			  if(state == OUT) {
					state = IN;
					++nw;
			 	}
		}
	}
	if(nc == 0){
		nl = 0;
	}

	  printf( "\n#line = %d #word = %d #character = %d\n", nl, nw, nc );
	  // until here, referring to src-08 from lecture 2.
	  printf("----------------------------------------------------\n" );

	  for (int i = 0; i < 20; ++i) {
	  	printf("%d : %d\n", i+1, wc[i+1]);
	  }
	  
	  printf("---------------------------------------------------\n" );

	  for (int i = 0; i < 20; ++i) {

	  	printf("%d |", i+1 );
	  	for (int j = 0; j < wc[i+1]/50; ++j) {
	  		printf("%s", "*" );
	  	}
	  	printf("\n" );
	  }

}