#include "header_file.h"
extern int count;
extern char *s1,*s2;

int compare(){

	if((*s1=='\0')&&(*s2=='\0'))
		return count;
	if(*s1==*s2){
		count++;
	return compare(s1+1,s2+1);
	
	}
	else 
	return -1;



}

void scan_string1(){

	printf("Enter the STRING 1\n");
	scanf("%s",s1);
	
	
}
void scan_string2(){


	printf("Enter the STRING 2\n");
	scanf("%s",s2);
	compare();
}



