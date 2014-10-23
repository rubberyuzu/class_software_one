#include <stdio.h>

int main() {
	int x = 5;

	if(1) {
		printf("if(1)\n");
		// this is printed out.
	}

	if(0){
		printf("if(0)\n");
		// this is not printed out.
	}
	
	if(5){
		printf("if(5)\n");
		// this is printed out.
	}

	// below will show errors.
	// if(0||5){
	// 	printf("if(0||5)\n");
	// }
	
	// if(0&&5){
	// 	printf("if(0&&5)\n");
	// }

	// if(x == 0 || 5){
	// 	printf("if(x == 0 || 5)\n");
	// }
	
	// if(x == (0||5)){
	// 	printf("if(x == (0||5))\n");
	// }

	if(x == 0 || x == 5){
		printf("if(x == 0 || x == 5)\n");
		// this is printed out.
	}
	
	return 0;

}