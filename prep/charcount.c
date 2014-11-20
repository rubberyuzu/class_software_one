#include <stdio.h>
#define NALPHA 26

int main(){
	// int array[] ... NG
	// int array[3] ...OK
	// int array[] ={1,2,3} ... OK
	// int array[3]={1,2,3} ... OK
	// char string[]="kawahara" ... OK
	// char string[9]="kawahara" ... OK
	// char string[9]={'k','a','w','a','h','a','r','a','\0'}; ... OK
	// char string[8]="kawahara" ... NG. needs to have null char.
	int count[NALPHA][NALPHA];
	int c;
	int first;
	int index = 0;
	while((c=getchar())!=EOF){
		if(index==0){
			first = ' ';
			continue;
		}
		count[first-'a'][c-'a']++;
		first = c;
	}
}