// INCOMPLETE!

// #include <stdio.h>

// int main() {
// 	int c, i, nwhite, nother;

// 	// this declares an array, which has 10 int(4byte each)
// 	int ndigit[10];

// 	// -----IMPORTANT-----
// 	// initializing the variables and the array.
// 	// turns all the bits to OFF.
// 	nwhite = nother = 0;
// 	for( i=0; i<10; ++i){
// 		ndigit[i] = 0; 
// 	}
// 	// -----IMPORTANT-----

// 	while((c = getchar()) != EOF){
// 		// single quotes means ASCII code.
// 		// 'x' is the ascii code of the character x.
// 		if(c >= '0' && c <= '9') {
// 			// note that c is just a number, not the char itself.
// 			++ndigit[c-'0'];
// 		}
// 	}

// }