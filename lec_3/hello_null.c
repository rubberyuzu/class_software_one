#include <stdio.h>

int main() {
	char s[6] = "Hello";
	// char s[5] = "Hello";
	// this does not work, as the string "Hello"
	// contains '\0' at the end, which will be counted
	// as one char.
	// char s[6] = "Hello";
	// "double quotation" means string.
	// 'single quotation' means number(code) for a char.
	// (reads the char as a number)
	// you can declare "Hello" either way.
	// char s[6] = "Hello";
	// char s[6] = {'H','e','l','l','o','\0'};

	char test[5] = {'a','b','\0','c','d'};
	// printing test out only shows "ab".
	// the reason behind this...?

	printf("%s\n", s);
	printf("%s\n", test); 
}