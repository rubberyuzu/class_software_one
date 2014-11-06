#include <stdio.h>
#include <stdlib.h>
#define NALPHA 26

int main(){
	char *str;
	int i;
	str = (char*)malloc(sizeof(char)*100);
	// anything which is over NALPHA

	for (i = 0; i < NALPHA; ++i){
		*(str+i) = i+'A';
		printf("%c\n", *(str+i));
	}
	*(str+i) = '\0';
	printf("Alphabet: %c\n", *str);
	printf("Alphabet: %s\n", str);
	free(str);
	return 0;
}