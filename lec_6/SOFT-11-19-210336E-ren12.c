#include <stdio.h>

double pie(double x, int N);

int main(){
	double start, end;
	int ntimes = 1;
	start = 0.1;
	for (ntimes = 1; ntimes <= 10; ++ntimes){
		end = pie(start, ntimes);
		printf("%d-th end point: %f\n", ntimes,end);
	}
	// 1-th end point: 0.200000
	// 2-th end point: 0.400000
	// 3-th end point: 0.800000
	// 4-th end point: 0.400000
	// 5-th end point: 0.800000
	// 6-th end point: 0.400000
	// 7-th end point: 0.800000
	// 8-th end point: 0.400000
	// 9-th end point: 0.800000
	// 10-th end point: 0.400000
	// 循環する。
	ntimes = 1000;
	end = pie(start, ntimes);
	printf("%d-th end point: %f\n", ntimes,end);
	// 1000-th end point: 0.000000
	// 途中で実数の誤差が生じることにより、循環がおわり、
	// 途中からずっと0になってしまう。
}

double pie(double x, int N){
	int i;
	double end = x;
	for(i=0; i<N; i++){
		if(end<=0.5){
			end *= 2;
		}else{
			end = 2 - 2*end;
		}
	}
	return end;
}