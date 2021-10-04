#include "header_file.h"
int pattern_abcd(){

	register int i,j,k,l;
	for(i=0;i<=5;i++){
	l=0;
	for(j=i;j>0;j--){
	printf(" ");
	for(k=j;k<=j;k++){
	printf("%c",'a'+l);
	l++;
	}
	}
	printf("\n");
	}
	return 0;
}
