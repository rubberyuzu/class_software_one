#include <stdio.h>
#include <stdlib.h>

int strlen1(char *s);
void strcpy1(char *s, char *t);

int main(){
	char *str = "yuzu";
	char *dest;
	dest = (char*)malloc(sizeof(char)*10);
	// malloc returns the pointer to void by default
	// so needs to cast!

	strcpy1(str, dest);
	printf("%s\n", dest);
}


int strlen1(char *s){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

void strcpy1(char *s, char *t){
	int len = strlen1(s);
	int i;
	for (i = 0; i < len; ++i){
		t[i] = s[i];
	}
}