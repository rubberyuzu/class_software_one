#include <stdio.h>
#include <stdlib.h>

int strlen1(char *s);
int strcmp1(char *s, char *t);

int main(){
	char *str1 = "Yoshihirooo";
	char *str2 = "Yoshihiro";

	printf("strcmp1(%s, %s) = %d\n", str1, str2, strcmp1(str1, str2));
	return 0;
}

int strcmp1(char *s, char *t){
	int i = 0;
	while(s[i]!='\0' || t[i]!='\0'){
		if(s[i] == t[i]){
			i++;
		} else if (s[i]>t[i]){
			return 1;
		} else {
			return -1;
		}
	}
	if (s[i] == '\0' && t[i] == '\0'){
		return 0;
	} else if (s[i] == '\0'&& t[i] != 0){
		return -1;
	} else {
		return 1;
	}
}