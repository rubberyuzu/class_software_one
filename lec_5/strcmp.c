#include <stdio.h>
#include <stdlib.h>

int strlen1(char *s);
int strcmp1(char *s, char *t);

int main(){
	char *str1 = "Yuzu";
	char *str2 = "Yoshi";

	printf("strcmp1(%s, %s) = %d\n", str1, str2, strcmp1(str1, str2));
	return 0;
}

int strlen1(char *s){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

int strcmp1(char *s, char *t){
	int i;

	{
		/* code */
	}
}