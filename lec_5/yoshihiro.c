#include <stdio.h>

int main(){
	char *namelist[] = {"Kawahara", "Nakata", "Sakamoto", "Shinoda"};
	int i;
	for (i = 0; i < 4; ++i){
		printf("Initial: %c\n",*namelist[i]);
		printf("Name: %s\n", namelist[i]);
	}
}