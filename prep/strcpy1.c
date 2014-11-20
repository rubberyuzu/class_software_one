#include <stdio.h>

int strcpy1(char *s, char *t);

int main(){
	char *str = "kawahara";
	char *cpy;
	cpy = (char*)malloc(sizeof(char)*10);
	strcpy1(*cpy, *str);
	free(cpy);
}

int strcpy1(char *cpy, char *org){
	
}