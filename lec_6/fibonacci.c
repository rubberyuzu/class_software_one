#include <stdio.h>

int fibonacci(int n);

int main(){
	printf("%d\n", fibonacci(10));
}

int fibonacci(int n){
	if(n<=0){
		return -1;
	}else if(n==1){
		return 1;
	}else if(n==2){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}