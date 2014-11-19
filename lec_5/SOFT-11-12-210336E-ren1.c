#include <stdio.h>

int main(){
	char *first_name = "Yoshihiro";
	char lastname[9] = "Kawahara";
	printf("Name %s %s\n", first_name, lastname);
	printf("Name %s %s\n", first_name, &lastname[0]);
	printf("Name...? %s %s\n", first_name+3, &lastname[1]);
	// first_name = a pointer to a string.
	// just pass the pointers to printf.
	// read until null.
	printf("Initial %c\n", *first_name);
}