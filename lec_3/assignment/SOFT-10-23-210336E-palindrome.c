#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]);
// this above is declaration of the function,
// so that you can call it in the main funciton
// even before you define it. (prototype declaration)

int main() {
	char str[256];
	// here setting the limit of the length of the string.
	fgets(str, sizeof(str), stdin);

	if(is_palindrome(str)){
		printf("%s is palindrome.\n", str);
	} else {
		printf("%s is not palindrome.\n", str);
	}

	return 0;
}

int is_palindrome(char str[]) {
	// note 
	int len = strlen(str);


	if(len <=2){
		return 1;
	}

	int i;
	for(i = 0; i < len/2 ; i++) {
		if(str[i] != str[len-i-2]){
			return 0;
		}
	}
	return 1;
}