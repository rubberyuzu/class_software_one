#include <stdio.h>

#define NALPHA 26

int main() {
	int count[NALPHA][NALPHA];
	int c,i,j,first;
	int index = 0;

	for (int i = 0; i < NALPHA; ++i) {
		for (int j = 0; j < NALPHA; ++j) {
			count[i][j] = 0;
		}
	}

	while((c=getchar())!=EOF){
		if(index==0){
			count[' '-'a'][c-'a'] = 0;
		}
		if(('a'<=first&&first<'a'+NALPHA)&&
			('a'<=c&&c<'a'+NALPHA)){
			count[first-'a'][c-'a']++;
		}
		first = c;
		index++;
	}

	for (int i = 0; i < NALPHA; ++i) {
		for (int j = 0; j < NALPHA; ++j) {
			printf("%c%c : %d\n",i+'a',j+'a',count[i][j]);
		}
	}

}
