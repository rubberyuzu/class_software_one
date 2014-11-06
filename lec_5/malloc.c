#include <stdio.h>
#include <stdlib.h>

// malloc ... returns address
// (short*)cast .. why? from what?

int main(){
	short* buf;
	buf = (short*)malloc(sizeof(short)*2000);
	// reserve the memory space
	// *(×kakeru) 2000
	for (int i = 0; i < 100000; ++i){
		buf[i] = 1;
	}
	free(buf);
}