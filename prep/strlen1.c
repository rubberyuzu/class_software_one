#include <stdio.h>

int strlen1(char *s);

int main(){
	char str[] = "kawahara";
	printf("%s = %d-char long", str, strlen1(str));
}

int strlen1(char *s){
	int i = 0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}