#include <stdio.h>
#include <stdlib.h>

int main(){
	int *i, *sum;
	// yet to know where the free memory is.
	sum = (int*)malloc(sizeof(int)*1);
	i = (int*)malloc(sizeof(int)*1);
	// malloc looks for free memory space and reserves it.
	// without malloc, having a segmentation fault
	*sum = 0;
	*i = 0;

	for (*i = 0; *i <= 10; ++*i){
		*sum = *sum + *i;
		// *i++ => error: *(i++)
		// (*i)++ => okay
		// difference btw i++ & ++i
		// http://www.cppdrive.jp/cstart/ope/index4.html
	}
	printf("sum = %d\n", *sum);
	free(sum);
	free(i);
	return 0;
	// malloc is for creating the content for a pointer.
}