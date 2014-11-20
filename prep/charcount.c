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
	printf("%s\n", "running");
	int count[NALPHA][NALPHA];
	int c, i, j;
	int first;
	int index = 0;
	for( i = 0 ; i < NALPHA ; i++ ) {
    for( j = 0 ; j < NALPHA ; j++ ) {
      count[i][j] = 0;
    }
  }
  	printf("%s\n", "running");
	while((c=getchar())!=EOF){
		if(index==0){
			first = ' ';
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
	printf("%s\n", "running");
	for( i = 0 ; i < NALPHA ; i++ ) {
    for( j = 0 ; j < NALPHA ; j++ ) {
      printf("%c %c = %d\n",i+'a', j+'a', count[i][j] );
    }
  }
}