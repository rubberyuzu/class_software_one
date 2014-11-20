#include <stdio.h>

int fibonacci(int n);

int main(){
	printf("%d\n", fibonacci(10));
}

// int fibonacci(int n){
// 	if(n<=1){
// 		return n;
// 	}else{
// 		return fibonacci(n-1)+fibonacci(n-2);
// 	}
// }

int fibonacci(int n){
	if(n<=1){
		return n;
	}else{
		int before = 0;
		int current = 1;
		int count, tempc;
		for (count = 1; count < n; ++count){
			tempc = current;
			current += before;
			before = tempc;
		}
		return current;
	}
}