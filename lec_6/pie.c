#include <stdio.h>

double pie(double x, int N);

int main(){
	double start, end;
	int ntimes = 1;
	start = 0.1;
	end = pie(start, ntimes);
	printf("end point: %f\n", end);
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