#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpy1(char *s, char *t);

int main(){
	char *str = "kawahara";
	char *cpy;
	cpy = (char*)malloc(sizeof(char)*10);
	strcpy1(cpy, str);
	printf("%s\n", cpy);
	free(cpy);
}

void strcpy1(char *cpy, char *org){
	int len = strlen(org);
	int i;
	for (i = 0; i < len; ++i){
		cpy[i] = org[i];
	}
}