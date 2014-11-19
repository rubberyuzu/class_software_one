#include <stdio.h>
#include <stdlib.h>

int strlen1(char *s);

int main(){
	char str[5] = "yuzu";
	printf("len: %d\n", strlen1(str));
}

int strlen1(char *s){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}
