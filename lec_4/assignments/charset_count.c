#include <stdio.h>

#define NALPHA 26

int main() {
	int count[NALPHA][NALPHA];
	double prob[NALPHA][NALPHA];
	double entro[NALPHA];
	double entro_max = 0;
	double entro_min = 1;
	int entro_min_c, entro_max_c;
	int c,i,j,first;
	int index = 0;
	int sum = 0;


	for (i = 0; i < NALPHA; ++i) {
		for (j = 0; j < NALPHA; ++j) {
			count[i][j] = 0;
		}
	}

	while((c=getchar())!=EOF){
		if(index==0){
			// for the first pair, set first and increase index,
			// and then move on to the next pair.
			// (a little repetitive?)
			first = c;
			index++; 
			continue;
		}
		if(('a'<=first&&first<'a'+NALPHA)&&
			('a'<=c&&c<'a'+NALPHA)){
			count[first-'a'][c-'a']++;
		}
		first = c;
		index++;
	}

	for (i = 0; i < NALPHA; ++i) {
		for (j = 0; j < NALPHA; ++j) {
			sum += count[i][j];
			printf("count %c%c : %d\n",i+'a',j+'a',count[i][j]);
		}
	}

	// initializing entro array.
	for (i = 0; i < NALPHA; ++i){
		entro[i] = 0;
	}

	for (i = 0; i < NALPHA; ++i) {
		for (j = 0; j < NALPHA; ++j) {
			prob[i][j] = (double)count[i][j]/(double)sum;
			// without (double)s, prob is all 0.000000.
			entro[i] += prob[i][j];
			printf("prob %c%c : %f\n",i+'a',j+'a',prob[i][j]);
		}
		// replacing min, max if applicable for each alphabet.
		// getting the index of the character as well.
		// but this program does not get all the indexes of min or max
		// if there are multiple ones.
		if(entro_min>entro[i]){
			entro_min = entro[i];
			entro_min_c = i;
		}
		if(entro_max<entro[i]){
			entro_max = entro[i];
			entro_max_c = i;
		}
	}
	printf("entropy max %c : %f\n", entro_max_c+'a',entro_max);
	printf("entropy min %c : %f\n", entro_min_c+'a',entro_min);

}
