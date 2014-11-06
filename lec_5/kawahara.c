#include <stdio.h>

int main(){
	char *first_name = "Yoshihiro";
	char lastname[9] = "Kawahara";
	printf("Name %s %s\n", first_name, lastname);
	printf("Name %s %s\n", first_name, &lastname[0]);
	// first_name = a pointer to a string
	printf("Initial %c\n", *first_name);
}