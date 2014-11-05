// assignment 1 & 3:
// count[][] and bhattacharyya

#include <stdio.h>
#include <math.h>

#define NALPHA 26

int main() {
	int count[NALPHA][NALPHA];
	double org_prob[NALPHA][NALPHA];
	double prob[NALPHA][NALPHA];
	int c, i, j, n, first, min_c, max_c;
	int index = 0;
	int sum = 0;
	double min, max;
	double sum_prob[NALPHA];
	// I know bd[][] does not take NALPHA*NALPHA,
	// but do not know how much space the array would take up.
	double bd[NALPHA][NALPHA];
	double max_bd = 0;
	double min_bd = 10;
	int max_bd_c1,max_bd_c2, min_bd_c1, min_bd_c2;


	// --------------- count[][] ----------------------
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

	for (i = 0; i < NALPHA; ++i){
		sum_prob[i] = 0;
	}

	for (i = 0; i < NALPHA; ++i) {
		for (j = 0; j < NALPHA; ++j) {
			sum += count[i][j];
			printf("count %c%c : %d\n",i+'a',j+'a',count[i][j]);
		}
	}


	for (i = 0; i < NALPHA; ++i) {
		for (j = 0; j < NALPHA; ++j) {
			org_prob[i][j] = (double)count[i][j]/(double)sum;
			sum_prob[i] += org_prob[i][j];
			// without (double), prob is all 0.000000.
			printf("prob %c%c : %f\n",i+'a',j+'a',org_prob[i][j]);
		}
	}

for (i = 0; i < NALPHA; ++i){
	min = 2.0;
	max = -1.0;
	for (j = 0; j < NALPHA; ++j){
		prob[i][j] = (double)org_prob[i][j]/(double)sum_prob[i];
		if(min>=prob[i][j] && org_prob[i][j]>0){
			min = prob[i][j];
			min_c = j;
		}
		if (max<=prob[i][j] && org_prob[i][j]>0){
			max = prob[i][j];
			max_c = j;
		}
	}
	printf("[%c]: min = %c (%e), max = %c (%e)\n",i+'a', min_c+'a', min, max_c+'a', max);
}
// -------------------------------------------

// -----------Bhattacharyya-------------------

for (i = 0; i < NALPHA; ++i){
	for (j = i+1; j < NALPHA; ++j){
		bd[i][j] = 0;
	}
}

for (i = 0; i < NALPHA; ++i){
	for (j = i+1; j < NALPHA; ++j){
		for (n = 0; n < NALPHA; ++n){
			bd[i][j] += sqrt(prob[i][n]*prob[j][n]);
		}
	bd[i][j] = -log(bd[i][j]);
	printf("bd[%c][%c]: %e\n",i+'a',j+'a',bd[i][j]);
	
	if (bd[i][j]>=max_bd){
		max_bd = bd[i][j];
		max_bd_c1 = i;
		max_bd_c2 = j;
	}
	if (bd[i][j]<=min_bd){
		min_bd = bd[i][j];
		min_bd_c1 = i;
		min_bd_c2 = j;
	}

	}
}
printf("max of bd[%c][%c] :%e\n", max_bd_c1+'a',max_bd_c2+'a',max_bd);
printf("min of bd[%c][%c] :%e\n", min_bd_c1+'a',min_bd_c2+'a',min_bd);
//----------------------------------------------

}
